#include <iostream>
#include <queue>

using namespace std;

void actualizar (int& min, int& max, queue<int> lista) {
    max = -1001;
    min = 1001;
    while (not lista.empty()) {
        int num = lista.front();
        if (num > max) max = num;
        if (num < min) min = max;
        lista.pop();
    }
    return;
}

void sacar (int& min, int& max, double& suma, const queue<int>& lista) {
    cout << "min " << min << "; max " << max << "; media " << suma/lista.size() << endl;
    return;
}

int main () {
    int min = 1001, max = -1001;
    int x;
    double suma = 0;

    queue<int> fila;

    while (cin >> x && x <= 1000 && x >= -1001) {
        if (x != -1001) {
            // Añadir
            fila.push(x);
            if (x > max) max = x;
            if (x < min) min = x;
            suma += x;
            sacar(min,max,suma,fila);
        } else {
            // Toca borrar
            if (not fila.empty()) {
                int y = fila.front();
                suma -= y;
                fila.pop();
                if (fila.empty()) {
                    // Borramos y se queda vacia
                    cout << 0 << endl;
                    min = 1001;
                    max = -1001;
                    suma = 0;
                } else {
                    // Borramos y toca calcula de nuevo el min y max
                    actualizar(min, max, fila);
                    sacar(min, max, suma, fila);
                }
            } else {
                cout << 0 << endl;
                min = 1001;
                max = -1001;
                suma = 0;
            }
        }
    }
    return 0;
}