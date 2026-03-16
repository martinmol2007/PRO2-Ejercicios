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
    
    Heap<Elem> heap;
    
    int n, i = 0;
    while (cin >> n) {
        heap.push({n, i}); // Valor e Index
        while (heap.top().index <= i - W && not heap.empty()) {
            heap.pop();
        }
        i++;
        cout << heap.top().valor << endl;
    }
    return 0;
}