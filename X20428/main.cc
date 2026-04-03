#include <iostream>
#include "heap.hh"

using namespace std;
using namespace pro2;

int main () {
    Heap<int> heap;
    int n;

    while (cin >> n) {
        heap.push(n);
    }

    while (not heap.empty()) {
        cout << heap.top();
        heap.pop();
        if (not heap.empty()) {
            cout << " ";
        }
    }
    cout << endl;
}