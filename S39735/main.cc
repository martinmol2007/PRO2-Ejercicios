#include <iostream>
#include <list>
#include <string>

using namespace std;

void sacar (const list<int>& lista, list<int>::iterator it) {
    list<int>::const_iterator cit = lista.begin();
    bool ha_salido = false;

    while (cit != lista.end()) {
        if (cit != it) {
            if(cit == lista.begin()) cout << *cit;
            else cout << " " << *cit;
        } else if (cit == it && not ha_salido) {
            if (it == lista.begin()) {
                cout << "[" << *it << "]"; 
            } else {
                cout << " [" << *it << "]";
            }
            ha_salido = true;
        }
        cit++;
    }

    if(ha_salido) {
        cout << endl;
    } else {
        cout << " []" << endl;
    }
}

int main () {
    list<int> lista;
    list<int>::iterator it = lista.end();

    string instruccion;

    while (cin >> instruccion) {
        if (instruccion == "ins") {
            int n;
            cin >> n;
            it = lista.insert(it, n);
        }
        else if (instruccion == "del") {
            if (not lista.empty() and it != lista.end()) {
                it = lista.erase(it);
            }
        }
        else if (instruccion == "++") {
            if (it != lista.end()) {
                it++;
            }
        }
        else { // instruccion == "--"
            if (not lista.empty() && it != lista.begin()) {
                it--;  
            }
        }
    }
    sacar(lista, it);
}