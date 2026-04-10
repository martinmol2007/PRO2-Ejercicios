#include <iostream>
#include <string>
#include <map>
#include <list>

using namespace std;

int main () {
    string nom;
    int n;

    map<int , list<string> > num_nom;
    map<string , int> nombres;

    while (cin >> nom >> n) {
        num_nom[n].push_back(nom);
        nombres.insert({nom, n});
    }

    for (auto it = nombres.begin(); it != nombres.end(); it++) {
        string nombre = it->first;
        int num = it->second;
        
        cout << it->first;

        auto it2 = num_nom.find(-num);

        if (it2 != num_nom.end()) {
            auto it3 = it2->second.begin();
            while (it3 != (*it2).second.end()) {
                if (*it3 != nombre) cout << " " << *it3;
                it3++;
            }
        }
        cout << endl;
    }

    return 0;
}