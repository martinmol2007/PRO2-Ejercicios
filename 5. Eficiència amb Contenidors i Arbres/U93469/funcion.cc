#include <iostream>
#include <queue>
#include <set>
using namespace std;


queue<string> remove_repeats(queue<string>& entrada) {
    set<string> s;

    queue<string> result;

    while (not entrada.empty()) {
        string palabra = entrada.front();
        auto it = s.find(palabra);
        if (it == s.end()) {
            result.push(palabra);
            s.insert(palabra);
        }
        entrada.pop();
    }

    return result;
}