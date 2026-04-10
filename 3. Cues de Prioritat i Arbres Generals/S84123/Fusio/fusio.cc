#include <list>
#include <vector>
#include "heap.hh"
using namespace std;
using namespace pro2;

// Implementa aquí la funció fusiona_llistes
list<int> fusiona_llistes(const vector<list<int>>& llistes) {
    int n = llistes.size();

    list<int> fusio;
    
    Heap<pair<int, int>> h; // first -> valor ; second -> posicion
    // Guarda el iterador del elemenot de cada lista
    vector<list<int>::const_iterator> its (n); // Vector de iteradores

    // Poner los primero elementos en el heap de cada lista
    for (int i = 0; i < n; i++) {
        auto it = llistes[i].begin();
        h.push({*it, i});  
        its[i] = it;
    }

    // Resto del ejercicio
    while (not h.empty()) {
        int valor = h.top().first;
        int pos = h.top().second;

        // fusio.push_back(valor);
        fusio.insert(fusio.end(), valor);

        // Coger el siguinete de valor de la lista de la posicion pos
        ++its[pos];
        if (its[pos] != llistes[pos].end()) {
            h.push({*(its[pos]), pos});
        }
        h.pop(); // Eliminar valor maximo de heap
    }
    return fusio;
}

