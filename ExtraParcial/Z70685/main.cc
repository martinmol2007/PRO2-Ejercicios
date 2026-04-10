#include <algorithm>
#include <iostream>
#include <map>
#include <set>

using namespace std;

/**
 * @brief Retorna un nou string amb les lletres de
 *        `s` ordenades
 *
 * @param  s  un `string`
 * @returns Un nou string amb les lletres de `s` ordenades
 */
string sort_chars(string s) {
    string sorted = s;
    sort(sorted.begin(), sorted.end());
    return sorted;
}

int main() {
    string s;
    map<string, set<string>> mapa;
    // First: Firma | Second: El grupo de palabras con esa firma (anagramas)

    while (cin >> s) {
        string firma = sort_chars(s);
        auto it = mapa.find(firma);

        if (it != mapa.end()) {
            mapa[firma].insert(s);
        }
        else {
            mapa.insert({firma, {s}});
        }
    }

    for (auto it = mapa.begin(); it != mapa.end(); it++) {
        if (it->second.size() > 1) {
            for (auto it2 = it->second.begin(); it2 != it->second.end(); it2++) {
                if (it2 != it->second.begin()) cout << " ";
                cout << *it2;
            }
            cout << endl;
        }
    }
}