#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

void sacar (set<string> s) {
    for (auto sit = s.begin(); sit != s.end(); sit++) {
        cout << (*sit) << " ";
    }
    cout << endl;
    return;
}

int main () {
    string first, second;

    map<string, set<string>> mapa1, mapa2;

    while (cin >> first >> second) {
        mapa1[first].insert(second);
        mapa2[second].insert(first);
    }

    auto it1 = mapa1.begin();
    auto it2 = mapa2.begin();

    while (it1 != mapa1.end() && it2 != mapa2.end()) {
        sacar(it1->second);
        


        it1++;
        it2++;
    }
    
}