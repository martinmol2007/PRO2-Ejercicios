#include <cassert>
#include <iostream>
using namespace std;

#if __has_include("program.hh")
#include "program.hh"
#elif __has_include("list.hh")
#include "list.hh"
#endif

bool read_list(List<int>& L) {
    string elem;
    while (cin >> elem and elem != "#") {
        L.insert(L.end(), stoi(elem));
    }
    return true;
}

void write_list(List<int>& L) {
    bool first = true;
    cout << '{';
    for (List<int>::iterator it = L.begin(); it != L.end(); it++) {
        if (first) {
            cout << *it;
            first = false;
        } else {
            cout << ", " << *it;
        }
    }
    cout << '}' << endl;
}

int main() {
    List<int> L, M;
    int pos;
    while (cin >> pos) {
        read_list(M);
        read_list(L);
        List<int>::iterator it = M.begin();
        for (int i = 0; i < pos; ++i) {
            ++it;
        }
        // Mostrar el iterador antes
        if (it != M.end()) {
            cout << *it << endl;
        } else {
            cout << "<end>" << endl;
        }

        M.splice(it, L);
        write_list(M);

        // Mostrar el iterador después
        if (it != M.end()) {
            cout << *it << endl;
        } else {
            cout << "<end>" << endl;
        }

        M.clear();
        write_list(L);
        L.clear();
        cout << endl;
    }
}
