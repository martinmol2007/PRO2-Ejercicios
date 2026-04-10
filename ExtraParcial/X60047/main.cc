#include <iostream>
#include <list>
#include <string>

using namespace std;

int main () {
    string instruccion;
   
    list<int> lista;
    list<int>::iterator it;

    while (cin >> instruccion) {
        if (instruccion == "push_front") {
            int n;
            cin >> n;
            
            lista.push_front(n);
            if (lista.size() == 1) {
                it = lista.begin();
            } else if (lista.size() % 2 != 0) {
                it--;
            }
        } 
        else if (instruccion == "push_back") {
            int n;
            cin >> n;

            lista.push_back(n);
            if (lista.size() == 1) {
                it = lista.begin();
            } else if (lista.size() % 2 != 0) {
                it++;
            }
        }
        else if (instruccion == "pop_front") {
            if (lista.empty()) {
                cout << "error" << endl;
            } else {
                lista.pop_front();
                if (not lista.empty() && lista.size() % 2 != 0) {
                    it++;
                }
            }
        }
        else if (instruccion == "pop_back") {
            if (lista.empty()) {
                cout << "error" << endl;
            } else {
                lista.pop_back();
                if (not lista.empty() && lista.size() % 2 != 0) {
                    it--;
                }
            }
        }
        else { // instruccion == "get_mid_value"
            if (lista.size() % 2 == 0) {
                cout << "error" << endl;
            } else {
                cout << *it << endl;
            }
        }
    }
}