#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
// Add more includes if you wish ...

using namespace std;

#include "BinTree.hh"

typedef BinTree<char> BT;

int getIdVar(string s)
{
    return atoi(s.substr(1).c_str());
}

// Add auxiliary functions if you wish ...

void getValueAtPostorderPositionAux(BT t, vector<char>& v) {
   if(t.empty()) return;
   
   getValueAtPostorderPositionAux(t.left(), v);
   getValueAtPostorderPositionAux(t.right(), v);

   v.push_back(t.value());
   return;
}

char getValueAtPostorderPosition(BT t, int pos) {
    vector<char> v;
    getValueAtPostorderPositionAux(t, v);
    return v[pos-1];
}

int main()
{
    string s1, s2, s3, s4, s5, s6, s7;
    int numvars;
    cin >> s1 >> numvars >> s2;
    vector<BT> t(numvars);
    while (cin >> s1 >> s2) {
        if (s1[0] == 't') {
            int idvar = getIdVar(s1);
            if (s2 == "=BinTree(") {
                char value;
                cin >> value >> s3 >> s4 >> s5 >> s6 >> s7;
                int idvar1 = getIdVar(s4);
                int idvar2 = getIdVar(s6);
                t[idvar] = BT(value, t[idvar1], t[idvar2]);
            } else if (s2 == "=") {
                cin >> s3 >> s4;
                int idvar1 = getIdVar(s3);
                if (s4 == ".left();") {
                    t[idvar] = t[idvar1].left();
                } else {
                    t[idvar] = t[idvar1].right();
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
            cout << getValueAtPostorderPosition(t[idvar], pos) << endl;
        } else {
            cout << "Error: unexpected command '" << s1 << "'" << endl;
            exit(1);
        }
    }
}