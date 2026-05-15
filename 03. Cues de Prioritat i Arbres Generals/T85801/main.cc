#include <iostream>
#include <string>
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

void sacar (const Paquet& p) {
    cout << p.prioritat << " " << p.origen << " " << p.desti << endl;
    return;
}

int main () {
    int n;
    cin >> n;

    Heap<Paquet> heap;
    
    int prioritat;
    string ip_o, ip_d;

    while (cin >> prioritat >> ip_o >> ip_d) {
        if (heap.size() < n) {
            heap.push({prioritat, ip_o, ip_d});
        } else {
            sacar(heap.top());
            heap.pop();
            heap.push({prioritat, ip_o, ip_d});
        }
    }

    while (not heap.empty()) {
        sacar(heap.top());
        heap.pop();
    }

    return 0;
}