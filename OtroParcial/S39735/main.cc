#include <iostream>
#include <string>
#include <list>

using namespace std;

void sacar (list<int>& l, list<int>::iterator x) {
    auto it = l.begin();
    bool sacado = false;

    while (it != l.end()) {
        if (it != l.begin()) cout << " ";
        if (it != x) {
            cout << *it;
        } else {
            cout << "[" << *it << "]";
            sacado = true;
        }

        it++;
    }
    if (not sacado) cout << " []";
    cout << endl;
}

int main () {
    list<int> l;

    auto it = l.end();
    string comando;

    while (cin >> comando) {
        if (comando == "ins") {
            int n;
            cin >> n;
            it = l.insert(it, n);
        }
        else if (comando == "del") {
            if (not l.empty() && it != l.end()) {
                it = l.erase(it);
            }
        }
        else if (comando == "++") {
            if (it != l.end()) {
                it++;
            }
        }
        else if (comando == "--") {
            if (not l.empty() && it != l.begin()) {
                it--;
            }
        }
    }
    sacar(l, it);
}