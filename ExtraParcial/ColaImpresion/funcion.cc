#include <iostream>
#include <queue>
using namespace std;

queue<string> remove_repeats(queue<string>& entrada) {
    queue<string> res;

    string ultimo;
    while (not entrada.empty()) {
        ultimo = entrada.front();
        entrada.pop();
        res.push(ultimo);
        while (entrada.front() == ultimo) {
            entrada.pop();
        }
    }

    return res;
}