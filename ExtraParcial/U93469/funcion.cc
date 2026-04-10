#include <iostream>
#include <queue>
using namespace std;

queue<string> remove_repeats(queue<string>& entrada) {
    queue<string> res;

    while (not entrada.empty()) {
        string s = entrada.front();
        entrada.pop();
        while (not entrada.empty() && s == entrada.front()) {
            entrada.pop();
        } 
        res.push(s);
    }

    return res;
}