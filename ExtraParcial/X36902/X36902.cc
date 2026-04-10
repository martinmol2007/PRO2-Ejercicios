#include <iostream>
#include <stack>

using namespace std;

int main () {
    int cont = 0;
    bool correcte = true;

    char c;
    cin >> c;

    stack<char> p;
    
    while (c != '.' && correcte) {
        if ( c == '(' or c == '[') {
            p.push(c);
        } 
        else {
            if ( c == ')') {
                if ( not p.empty() && p.top() == '(') p.pop();
                else correcte = false;

            }
            else {
                if ( not p.empty() && p.top() == '[') p.pop();
                else correcte = false;
            }
        }
        ++cont;
        cin >> c;
    }

    if(correcte && p.empty()) cout << "Correcte" << endl;
    else cout << "Incorrecte " << cont << endl;
}
