#include <iostream>
#include "heap.hh"

using namespace std;
using namespace pro2;

struct Punt {
    double x, y;
};

bool operator> (const Punt& a, const Punt& b) {
    double dist1 = (a.x * a.x + a.y * a.y);
    double dist2 = (b.x * b.x + b.y * b.y);

    if (dist1 != dist2) return dist1 < dist2;
    if (a.x != b.x) return (a.x) < (b.x);
    else return (a.y) < (b.y);

    return false;
}

void sacar (Heap<Punt> h, int k) {
    int i = 0;
    while (i != k && not h.empty()) {
        cout << "(" << h.top().x << ", " << h.top().y << ")" << endl;
        h.pop();
        i++;
    }
 
    return;
}

int main() {
    
    Heap<Punt> heap;

    int k, M;
    cin >> k >> M;
    int cnt_m = 0;
    int tableros = 0;

    double x, y;
    while (cin >> x >> y) {
        Punt p = {x, y};
        heap.push(p);
        cnt_m++;
        
        if (cnt_m % M == 0) {
            if (tableros > 0) cout << "---" << endl;
            sacar(heap, k);
            tableros++;
        }
    }

    if (cnt_m % M != 0) {
        if (tableros > 0) cout << "---" << endl;
        sacar(heap, k);
    }

    return 0;
}
