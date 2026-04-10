#include <iostream>
#include <queue>

using namespace std;

void sacar(int& min, int& max, int suma, const queue<int>& cola) {
    if (suma == 0) {
        cout << 0 << endl;
    } else {
        cout << "min " << min << " max " << max << " media " << double(suma)/cola.size() << endl;
    }
    return;
}

void recalcular (int& min, int& max, queue<int> cola) {
    while (cola.size() != 0) {
        int x = cola.front();
        if (x > max) max = x;
        if (x < min) min = x;
        cola.pop();
    }
}

int main () {
    int x;
    int min = 1000, max = -1001, suma = 0;
    queue<int> cola;

    while (cin >> x && x <= 1000 && x >= -1001) {
        if (x != -1001) {
            cola.push(x);
            if (x > max) max = x;
            if (x < min) min = x;
            suma += x;
            sacar(min, max, suma, cola);
        } else {
            if (cola.empty()) {
                min = 1000;
                max = -1001;
                suma = 0;
                sacar(min,max,0,cola);
            } else {
                int x = cola.front();
                suma -= x;
                if (suma == 0) {
                    cola.pop();
                    min = 1000;
                    max = -1001;
                    suma = 0;
                    sacar(min,max,0,cola);
                } else {
                    recalcular(min,max,cola);
                    sacar(min,max,suma,cola);
                }
            }
        }
    }
}