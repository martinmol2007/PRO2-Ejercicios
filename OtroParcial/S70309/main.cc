#include <iostream>
#include <string>
#include <utility>
using namespace std;

// NOTA: bintree-io.hh ja defineix operator>> i operator<< per pair<A,B>,
// per tant no cal definir-los aquí.
#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

bool find_first(BinTree<pair<int, string>> t, int x, string& trobat);

int main() {
    BinTree<pair<int, string>> t;
    cin >> t;

    int x;
    while (cin >> x) {
        string result;
        if (find_first(t, x, result)) {
            cout << x << ' ' << result << endl;
        } else {
            cout << "No s'ha trobat " << x << endl;
        }
    }
}
