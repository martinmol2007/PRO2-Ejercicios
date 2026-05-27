#include <iostream>
#include <vector>

#include "Arbre.hh"
#include "ArbIOstring.hh"

using namespace std;

int main() {
    vector<string> v;
    string s;
    while (cin >> s && s != "#") {
        v.push_back(s);
    }
    Arbre<string> a;
    a.cons_arbre_cerca(v);
    escriure_arbre_string(a, "#");
}