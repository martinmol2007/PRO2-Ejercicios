#include "treeOfEvaluations.hh"
#include "BinTree.hh"

using namespace std;


// Pre:  t és un arbre no buit que representa una expressió booleana correcta
//       sobre els valors true,false i els operadors and,or,not.
// Post: Retorna un arbre binari de booleans
//       que té el mateix conjunt de posicions que t.
//       A més a més, per a cada posició p, el subarbre a posició p de t
//       representa una expressió que s'avalua a true si i només si
//       hi ha el valor true a la posició p de l'arbre retornat.
BinTree<bool> treeOfEvaluations(BinTree<string> t) {
    if(t.left().empty()) {
        bool valor;

        if (t.value() == "true") valor = true;
        else valor = false;

        return BinTree<bool> (valor);
    } else {
        BinTree<bool> e = treeOfEvaluations(t.left());
        if (t.value() == "not") return BinTree<bool> (not e.value(), e, BinTree<bool>());
        else {
            BinTree<bool> d = treeOfEvaluations(t.right());
            bool valor;

            if (t.value() == "and") {
                valor = e.value() && d.value();
            } 
            else {
                valor = e.value() or d.value();
            }
            
            return BinTree<bool> (valor, e, d);
        }
    }
}