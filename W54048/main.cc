#include <iostream>
#include <sstream>
#include <vector>
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
vector<string> fix_html(istream& in); /* 
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

void show_vector(const vector<string>& word_seq) {
    if (!word_seq.empty()) {
        cout << word_seq.front();
        for (size_t i = 1; i < word_seq.size(); i++) {
            cout << ' ' << word_seq[i];
        }        
    }
    cout << endl;
}

int main() {
    string line;
    while (getline(cin, line)) {
        istringstream iss(line);
        show_vector(fix_html(iss));
    }
    return 0;
}
