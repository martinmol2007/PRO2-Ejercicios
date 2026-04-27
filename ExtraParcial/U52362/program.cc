#include <iostream>
#include "heap.hh"
#include <vector>

using namespace std;
using namespace pro2;

typedef pair<double, double> Punt;

bool operator> (const Punt& a, const Punt& b) {
    double ax = a.first * a.first;
    double ay = a.second * a.second;

    double bx = b.first * b.first;
    double by = b.second * b.second;

    if (ax + ay != bx + by) {
        return ax+ay > bx+by;
    }
    else if (a.first != b.first) {
        return a.first > b.first;
    } 
    else {
        return a.second > b.second;
    }
}

void escribir_puntos (Heap<Punt> h) {
    vector<Punt> v;
    while (not h.empty()) {
        v.push_back(h.top());
        h.pop();
    }

    int n = v.size();

    for (int i = n-1; i >= 0; i--) {
        cout << "(" << v[i].first << ", " << v[i].second << ")" << endl;
    }

    return;
}

int main () {
    int k, M;
    cin >> k >> M;

    bool primer = true;
    Heap<Punt> punts;
    double x, y;
    int cont = 0; // Numero de elmentos (para sabes cuando imprimir)

    while (cin >> x >> y) {
        
        Punt p (x, y);
        punts.push(p);
        if (punts.size() > k) punts.pop(); // Quitamos el peor
        cont++;
        if (cont%M == 0) {
            if (primer) {
                primer = false;
            } else {
                cout << "---" << endl;
            }
            escribir_puntos(punts);
        }
    }
    
    if (cont%M != 0) {
        if (primer) {
            primer = false;
        } else {
            cout << "---" << endl;
        }
        escribir_puntos(punts);
    }
}
