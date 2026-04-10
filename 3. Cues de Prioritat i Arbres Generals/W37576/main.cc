#include <iostream>
#include "heap.hh"

using namespace std;
using namespace pro2;

struct Elem {
    int valor;
    int index;
};

bool operator>(const Elem& a, const Elem& b) {
    return a.valor > b.valor;
}

int main () {
    int W;
    cin >> W; // Mida de la ventana
    
    Heap<Elem> heap; // Heap para tenerlos orednados por maximo
    
    int n, i = 0; // i es la posicion de la secuencia
    while (cin >> n) {
        heap.push({n, i}); // Valor e Index (Indice es el i)
        while (heap.top().index <= i - W) { /* Mientras no se cumpla la condicion de la ventana, quitar top*/
            heap.pop();
        }
        ++i;
        cout << heap.top().valor << endl;
    }
    return 0;
}