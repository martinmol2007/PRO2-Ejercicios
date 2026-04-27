#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main () {
    string paraula;
    int i = 1;

    map<string, set<int>> mapa;

    while (cin >> paraula) {
        mapa[paraula].insert(i);
        i++;
    }

    for (auto it = mapa.begin(); it != mapa.end(); it++) {
        cout << it->first << ":";
        for (auto it2 = (*it).second.begin(); it2 != (*it).second.end(); it2++) {
            cout << " " << *it2;
        }
        cout << endl;
    }
    return 0;
}