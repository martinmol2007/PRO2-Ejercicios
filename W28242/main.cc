#include "tree-io.hh"
#include "tree.hh"
using namespace pro2;

#include <iostream>
using namespace std;

int eval_expression(Tree<string> t);

int main() {
    Tree<string> t;
    while (cin >> t) {
        cout << eval_expression(t) << endl;
    }
}
