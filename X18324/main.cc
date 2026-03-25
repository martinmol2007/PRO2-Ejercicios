#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;



int main () {
    string linea;
    while (getline(cin, linea)) {
        
        stack<char> pila;
        int max = 0;
        int cnt = 1;
        bool correcto = true;

        // Transformamos el string "linea" en un canal de lectura
        istringstream in(linea);

        char c;
        while (in >> c && correcto) {
            if (c == '(' or c == '[') pila.push(c);
            else {
                if(pila.empty()) correcto = false;
                else if (c == ')' && pila.top() != '(') correcto = false;
                else if (c == ']' && pila.top() != '[') correcto = false;
                else {
                    pila.pop();
                    // Verificar si es prefijo
                    if (pila.empty()) max = cnt;
                }
            }
            cnt++;
        }
        cout << max << endl;
    }
    return 0;
}