#include <iostream>
#include <sstream>
#include <vector>
#include <stack>
#include "html_elem.hh"

using namespace std;

/**
 * @brief Corregeix una seqüència de paraules que representa una 
 *        pàgina HTML
 * 
 * Cal fer 3 correccions:
 * 1. Si un tag de tancar no es correspòn amb el tag d'obrir corresponent,
 *    cal substituir-lo.
 * 2. Si un tag de tancar no té el seu tag corresponent d'obrir, cal 
 *    esborrar-lo (és a dir, no imprimir-lo).
 * 3. Si al final de la seqüència han quedat tags oberts, cal afegir els
 *    tags de tancar corresponents.
 * 
 * @param in Un `stream` d'entrada d'on llegir les paraules
 * @returns Un `vector` amb la seqüència de tags arreglada
 */
vector<string> fix_html(istream& in) {
    stack<string> P;
    vector<string> v;

    string s;

    // Llegeix cada paraula del canal d'entrada `in` mentre es pugui
    while (in >> s) {
        if (is_open_tag(s)) {
            string name = tag_name(s);
            P.push(name);
            v.push_back(s);
        }
        else if (is_close_tag(s)) {
            if (not P.empty()) {
                string name = tag_name(s);

                if (P.top() == name) {
                    v.push_back(s);
                } else { // Nombre diferente, corregirlo
                    v.push_back("</" + P.top() + ">"); // Poner el que toca de cierre
                }
                P.pop();
            }
        }
        else {
            v.push_back(s);
        }
    }

    while (not P.empty()) {
        v.push_back("</" + P.top() + ">");
        P.pop();
    }

    return v;
}

