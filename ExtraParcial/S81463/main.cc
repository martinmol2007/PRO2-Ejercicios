#include <iostream>
#include <stack>

using namespace std;

int main () {
    string s;
    cin >> s;

    stack<char> pila;
    bool error = false;


    for (int i = 0; i < s.size() && not error; i++) {
        if (s[i] == '(' or s[i] == '[' or s[i] == '{' ) {
            pila.push(s[i]);
        } else {
            if (pila.empty()) {
                error = true;
            } else {
                if (s[i] == ')' && pila.top() == '(') {
                    pila.pop();
                }
                else if (s[i] == ']' && pila.top() == '[') {
                    pila.pop();
                }
                else if (s[i] == '}' && pila.top() == '{') {
                    pila.pop();
                } 
                else {
                    error = true;
                }
            }
        }
    }
    if (error) {
        cout << "Incorrecta";
    } else {
        pila.empty() ? cout << "Correcta" : cout << "Incorrecta";
    }
    cout << endl;

    return 0;
}

