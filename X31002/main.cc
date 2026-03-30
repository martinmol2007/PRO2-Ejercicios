#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool es_minuscula (char c) {
    return c >= 'a' && c <= 'z';
}

string stack_to_string (stack<char>& pila) {
    string s;
    while (not pila.empty()) {
        s.insert(s.begin(), pila.top());
        pila.pop();
    }
    return s;
}

string esborra(string w) {
    stack<char> pila;
    int n = w.size();

    pila.push(w[0]);

    for (int i = 1; i < n; i++) {
        if(not pila.empty()) {
            if( not es_minuscula(pila.top()) and char(w[i] - 'a' + 'A') == pila.top()) {
                pila.pop();
            } else if (es_minuscula(pila.top()) and char(pila.top() - 'a' + 'A') == w[i]) {
                pila.pop();
            } else {
                pila.push(w[i]);
            }
        } else {
            pila.push(w[i]);
        }
      
    }

    return stack_to_string(pila);

}

int main () {
    string s;
    stack<char> pila;
    while (cin >> s) {
        cout << esborra(s) << endl;
    }

    return 0;
}