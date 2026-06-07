#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
// Add more includes if you wish ...

using namespace std;

#include "BinTree.hh"

//using BT = BinTree<char>;
typedef BinTree<char> BT;
typedef BinTree<int> BTint;

int getIdVar(string s)
{
    return atoi(s.substr(1).c_str());
}


char getValueAtPostorderPosition(BT t, BTint size, int pos) {
    int size_left = 0;
    if(not size.left().empty()) {
        size_left = size.left().value();
    }
    int size_right = 0;
    if(not size.right().empty()) {
        size_right = size.right().value();
    }

    if(pos <= size_left) {
        return getValueAtPostorderPosition(t.left(), size.left(), pos);
    }
    else if(pos <= size_left + size_right) {
        return getValueAtPostorderPosition(t.right(), size.right(), pos-size_left);
    }
    else {
        return t.value();
    }
}

int main()
{
    string s1, s2, s3, s4, s5, s6, s7;
    int numvars;
    cin >> s1 >> numvars >> s2;

    vector<BT> t(numvars);
    vector<BTint> size(numvars, BinTree<int>(0));

    while (cin >> s1 >> s2) {
        if (s1[0] == 't') {
            int idvar = getIdVar(s1);
            if (s2 == "=BinTree(") {
                char value;
                cin >> value >> s3 >> s4 >> s5 >> s6 >> s7;
                int idvar1 = getIdVar(s4);
                int idvar2 = getIdVar(s6);
                t[idvar] = BT(value, t[idvar1], t[idvar2]);

                // Actualizar el vector de size del arbol
                int s_izq = size[idvar1].value();
                int s_der = size[idvar2].value();
                size[idvar] = BinTree<int>(1 + s_izq + s_der, size[idvar1], size[idvar2]);
            } else if (s2 == "=") {
                cin >> s3 >> s4;
                int idvar1 = getIdVar(s3);
                if (s4 == ".left();") {
                    t[idvar] = t[idvar1].left();
                    size[idvar] = size[idvar1].left();
                } else {
                    t[idvar] = t[idvar1].right();
                    size[idvar] = size[idvar1].right();
                }
            }
        } else if (s1 == "cout<<") {
            int idvar = getIdVar(s2);
            cin >> s3;
            t[idvar].setOutputFormat(BinTree<int>::INLINEFORMAT);
            cout << t[idvar] << endl;
        } else if (s1 == "cout<<valueAtPostorderPosition(") {
            int idvar = getIdVar(s2);
            int pos;
            cin >> s3 >> pos >> s4;
            cout << getValueAtPostorderPosition(t[idvar], size[idvar], pos) << endl;
        } else {
            cout << "Error: unexpected command '" << s1 << "'" << endl;
            exit(1);
        }
    }
}