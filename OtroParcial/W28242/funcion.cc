#include "util.hh"
#include "tree.hh"

using namespace pro2;
using namespace std;

int eval_expression(Tree<string> t) {
    if (t.value() == "+") {
        int n = t.num_children();
        int suma = 0;
        for (int i = 0; i < n; i++) {
            suma += eval_expression(t.child(i));
        }
        return suma;
    }
    else if (t.value() == "-") {
        int n = t.num_children();
        if (n == 1) return - eval_expression(t.child(0));

        int res = eval_expression(t.child(0));

        for (int i = 1; i < n; i++) {
            res -= eval_expression(t.child(i));
        }
        return res;
    }
    else if (t.value() == "*") {
        int n = t.num_children();
        int val = eval_expression(t.child(0));

        for (int i = 1; i < n; i++) {
            val *= eval_expression(t.child(i));
        }
        return val;
    }

    return string_to_int(t.value());
  
}