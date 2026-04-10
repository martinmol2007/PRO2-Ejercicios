#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

void poner_libros (vector<stack<string>>& v) {
    string libro;
    int m;

    cin >> libro >> m;

    v[m-1].push(libro);

    return;
}

void quitar_libros (vector<stack<string>>& v) {
    int m, k;
    cin >> k >> m;

    for (int i = 0; i < k; ++i) {
        v[m-1].pop();
    }

    return;
}

void imprimir_libros (const vector<stack<string>>& v) {
    int m;
    cin >> m;

    stack<string> pila = v[m-1];
    
    cout << "Pila de la categoria " << m << endl;
    while (not pila.empty()) {
        cout << pila.top() << endl;
        pila.pop();
    }
    cout << endl;
    return;
}

int main () {
    // n representa la quentitat de piles
    int n;
    cin >> n;

    // Cada posicio del vector sera la pila de cateoria pos+1 (pos = 0 es igual a la pila 1,...)
    vector<stack<string>> v(n);

    int x;
    while (cin >> x && x != -4) {
        if (x == -1) {
            // Poner en la pila de la categoria m
            poner_libros(v);
        }
        else if (x == -2) {
            // Quitar k libros de la pila de categoria m
            quitar_libros(v);
        }
        else {
            // x == -3, Imprimir la pila de categoria m
            imprimir_libros(v);
        }
    }
    return 0;
}