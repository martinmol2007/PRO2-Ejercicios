#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main () {
    string s;
    while(cin >> s) {
        stack<char> pila;
        int error = 0;

        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == '(' or s[i] == '[') pila.push(s[i]);
            else {
                if (pila.empty()) {
                    error++;
                } 
                else {
                    if (s[i] == ')' and pila.top() != '(') {
                        error++;
                    } 
                    else if (s[i] == ']' and pila.top() != '[') {
                        error++;
                    }

                    pila.pop();
                }
            }
        }
        cout << error << endl;
    }
}