#include <iostream>
#include <sstream>
#include <vector>
#include <stack>
#include "html_elem.hh"

using namespace std;

void corregeix (stack<string>& pila, vector<string>& v) {
    while (not pila.empty()) {
        string arreglo = "</" + tag_name(pila.top()) + ">";
        v.push_back(arreglo);
        pila.pop();
    }

    return;
}

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
    string word;
    
    vector<string> v;
    stack<string> pila;
    
    while (in >> word) {
        if (not is_tag(word)) {
            v.push_back(word);
        }
        else {
            if (is_open_tag(word)) {
                v.push_back(word);
                pila.push(word);
            } else {
                if (not pila.empty()) {
                    if (is_open_tag(pila.top()) && tag_name(pila.top()) == tag_name(word)) {
                        v.push_back(word);
                        pila.pop();
                    } 
                    else if (is_open_tag(pila.top()) && tag_name(pila.top()) != tag_name(word)) {
                        string arreglo = "</" + tag_name(pila.top()) + ">";
                        v.push_back(arreglo);
                        pila.pop();
                    }
                }
            }
        }
    }
    if (not pila.empty()) {
        corregeix(pila, v);
    } 
    return v;
}

