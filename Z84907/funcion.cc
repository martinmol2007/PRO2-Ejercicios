#include <iostream>
#include <sstream>
#include <stack>
#include "html_elem.hh"
using namespace std;

/**
 * @brief Determina si una seqüència de paraules és una pàgina HTML correcta
 * 
 * @param in Un `stream` d'entrada d'on llegir les paraules
 * @returns `true` si la seqüència llegida de `in` és una pàgina HTML, `false` altrament.
 */
bool is_correct_html(istream& in) {
    string word;
    stack<string> P;    

    in >> word; // Ha de ser html
    if (not is_tag(word)) return false;
    if (is_close_tag(word)) return false;
    string name = tag_name(word);
    if (name != "html") return false;
    bool cierre_html = false;

    // Llegeix cada paraula del canal d'entrada `in` mentre es pugui
    while (in >> word) {
        if (cierre_html) return false;
        if (is_close_tag(word)) {
            string name = tag_name(word);
            if (P.empty()) {
                return false;
            }
            else {
                if (name != (P.top())) return false;
                if (name == "html") cierre_html = true;
                P.pop();
            }
        }
        else if (is_tag(word)) {
            string name = tag_name(word);
            P.push(name);
        }
    }
    
    return true;
}

