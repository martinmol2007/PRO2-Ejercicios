#include <iostream>
#include <string>
#include "vstack.hh"
#include "html_elem.hh"

using namespace std;

int main () {
    VStack P;
    string s;

    // bool script = false;
    bool borrar = false;

    while (cin >> s) {
        if (is_close_tag(s)) { // Es cerrado
            P.pop();
            if (tag_name(s) == "script") {
                // script = false;
                borrar = false;
            }
            cout << s << " ";
        }
        else if (is_tag(s)) { // Es abierto
            string name = tag_name(s);
            // P.push(name);
            // cout << s << " ";
            // Comprobar si es <script>
            if (name == "script") {
                // script = true;
                if (P.size() >= 2) {
                    string head = P.top(0);
                    string html = P.top(-1);

                    if (head == "head" && html == "html") {
                        borrar = false;
                    } else {
                        borrar = true;
                    }
                } 
                else {
                    borrar = true;
                }
            }
            P.push(name);
            cout << s << " ";
        }
        else { // Es un texto
            if (not borrar) {
                cout << s << " ";
            }
        }
    }

    return 0;
}