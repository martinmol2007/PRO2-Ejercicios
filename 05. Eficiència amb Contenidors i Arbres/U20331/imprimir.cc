#include <iostream>
#include <set>

using namespace std;


/**
 * @brief Saca un set
 * 
 * @param s Set de turistas
 */
void imprimir (const set<string>& s) {
    for (auto it2 = s.begin(); it2 != s.end(); it2++) {
        cout << " " << (*it2);
    }
    cout << endl;
    return;
}