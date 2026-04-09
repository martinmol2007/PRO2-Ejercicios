#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

void sacar (stack<char>& p) {
    stack<char> res;

    while (not p.empty()) {
        res.push(p.top());
        p.pop();
    }

    while (not res.empty()) {
        cout << res.top();
        res.pop();
    }
    cout << endl;
}

int main() {
    string s;
    while (cin >> s) {
        char c = s[0];

        stack<char> pila;
        pila.push(c);

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == '(' or s[i] == '[') {
                pila.push(s[i]);
            }
            else {
                if (pila.empty()) {
                    pila.push(s[i]);
                }
                else {
                    if (s[i] == ')' and pila.top() == '(') {
                        pila.pop();
                    }
                    else if (s[i] == ']' and pila.top() == '[') {
                        pila.pop();
                    }
                    else if (s[i] == ']' and pila.top() == '(') {
                        pila.pop();
                        bool error = false;
                        while (not pila.empty() && not error) {
                            if (pila.top() == '[') {
                                pila.pop();
                            } 
                            else {
                                error = true;
                            }
                        }
                        if(not error && pila.empty()) pila.push(']');
                    }
                    else {
                        pila.push(s[i]);
                    }
                }
            }
        }
        sacar(pila);
    }
}