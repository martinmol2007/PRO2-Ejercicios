#include <iostream>
#include "heap.hh"

using namespace std;
using namespace pro2;


struct Paquet {
    int prioritat;
    string origen, desti;
};

bool operator>(const Paquet& p1, const Paquet& p2) {
    return p1.prioritat > p2.prioritat;
}

int main () {
    int N;
    cin >> N;

    Heap<Paquet> heap;
    Paquet p;

    while (cin >> p.prioritat >> p.origen >> p.desti) {
        if (heap.size() < N) heap.push(p);
        else {
            Paquet pa = heap.top();
            heap.pop();
            heap.push(p);
            cout << pa.prioritat << " " << pa.origen << " " << pa.desti << endl;
        }
    }

    // Sacar la capacidad del route
    while (not heap.empty()) {
        Paquet pa = heap.top();
        heap.pop();
        cout << pa.prioritat << " " << pa.origen << " " << pa.desti << endl;
    }
    return 0;
}