#include <iostream>
#include "heap.hh"

using namespace std;
using namespace pro2;

int main () {
    Heap<int> heap;

    int n;
    cin >> n;

    int k;
    while (cin >> k) {
        heap.push(k);
    }

    while (n > 0) {
        cout << heap.top();
        heap.pop();
        n--;
        if (n > 0) cout << " ";
    }
    cout << endl;
}