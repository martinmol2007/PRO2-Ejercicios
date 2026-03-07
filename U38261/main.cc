#include <iostream>
using namespace std;

#include "bintree-inline.hh"
#include "bintree-io.hh"
#include "prune.hh"
using namespace pro2;



/**
 * @brief Poda les branques amb valor `x` d'un arbre binari 
 *        sense repeticions de valors.
 *
 * Retorna un nou arbre binari que és una còpia de `t`
 * però sense les branques que contenen el valor `x`.
 * Alhora retorna si la poda ha tingut èxit o no s'ha podat res.
 * 
 * @param t Arbre binari amb tots els valors diferents.
 * @param x Valor de les branques a podar.
 *
 * @pre `t` és un arbre binari a on tots els nodes tenen _valors diferents_.
 *
 * @return Retorna una parella (`std::pair`) amb l'arbre podat 
 *         i un booleà que és `true` si s'ha podat alguna branca 
 *         i `false` si l'arbre resultat és igual que `t`.
 */
std::pair<pro2::BinTree<int>, bool> prune_tree(pro2::BinTree<int> t, int x);  

int read_int_oneline(string line) {
    istringstream iss(line);
    int x;
    iss >> x;
    return x;
}

void main_inline() {
    string numline, treeline;
    while (getline(cin, numline) && getline(cin, treeline)) {
        int x = read_int_oneline(numline);
        BinTree<int> t = bintree_inline_read<int>(treeline);
        pair<BinTree<int>, bool> res;
        for (int i = 0; i < 200; i++) {
            res = prune_tree(t, x);
        }
        if (res.second) {
            cout << bintree_to_string_inline(res.first) << endl;
        } else {
            cout << "No s'ha trobat " << x << endl;
        }
    }
}

void main_visual() {
    int x;
    BinTree<int> t;
    while (cin >> x >> t) {
        auto res = prune_tree(t, x);
        if (res.second) {
            cout << res.first << endl;
        } else {
            cout << "No s'ha trobat " << x << endl;
        }
    }
}

int main() {
    string format, line;
    getline(cin, format);  // determina el format dels arbres
    if (format == "inline") {
        main_inline();
    } else {
        main_visual();
    }
}
