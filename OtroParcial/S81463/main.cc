#include <iostream>
#include <stack>
#include <sstream>
#include <string>

using namespace std;

int main () {
    bool error = false;
    string s;
    char c;

    getline(cin, s);

    istringstream in(s);

    stack<char> pila;


    while (in >> c && not error) {
        if (c == '(' or c == '[' or c == '{') {
            pila.push(c);
        }
        else {
            if (pila.empty()) {
                error = true;
            } 
            else {
                if (c == ')' and pila.top() != '(') {
                    error = true;
                }
                else if (c == ']' and pila.top() != '[') {
                    error = true;
                }
                else if (c == '}' and pila.top() != '{') {
                    error = true;
                }
                else {
                    pila.pop();
                }
            }
        }
    }

    if (error) {
        cout << "Incorrecta" << endl;
    } else {
        if (not pila.empty()) cout << "Incorrecta" << endl;
        else cout << "Correcta" << endl;
    }

    return 0;
}