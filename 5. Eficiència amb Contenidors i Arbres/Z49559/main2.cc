#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>

using namespace std;

int main () {
    string s1, s2;
    map<string, set<string>> amigos;
    while (cin >> s1 >> s2) {
        amigos[s1].insert(s2);
        amigos[s2].insert(s1);
    }
    // Conjunto de amigos | Quienes tienen esos amigos
    map<set<string>, vector<string>> rel;

    for (auto it = amigos.begin(); it != amigos.end(); ++it) {
        string s = it->first;
        set<string> a = it->second;

        rel[a].push_back(s);
    }

    for (auto it = rel.begin(); it != rel.end(); ++it) {
        if (it->second.size() > 1) {
            int n = it->second.size();
            for (int i = 0; i < n; i++) {
                if (i != 0) cout << " ";
                cout << it->second[i];
            }
            cout << endl;
        } 
    }

    return 0;
}