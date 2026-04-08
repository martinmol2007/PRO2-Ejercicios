#include <iostream>
#include <sstream>
#include "html_elem.hh"
using namespace std;

/**
 * @brief Determina si una seqüència de paraules és una pàgina HTML correcta
 * 
 * @param in Un `stream` d'entrada d'on llegir les paraules
 * @returns `true` si la seqüència llegida de `in` és una pàgina HTML, `false` altrament.
 */
bool is_correct_html(istream& in); /* 
{
    string word;
    ...
    // Llegeix cada paraula del canal d'entrada `in` mentre es pugui
    while (in >> word) {
        ...
    }
    ...
}

*/


int main() {
    string line;
    while (getline(cin, line)) {
        istringstream iss(line);
        cout << (is_correct_html(iss) ? "HTML" : "text") << endl;
    }
    return 0;
}
