#include "BinTree.hh"
#include "maxSumDescPath.hh"

/**
 * @pre:  t conté naturals positius en els seus nodes.
 * @post: Retorna la suma màxima que es pot obtenir sumant els valors que 
 *        es troben en un camí descendent des de l'arrel fins a alguna fulla.
 */ 
int maxSumDescPath(BinTree<int> t) {
    if (t.empty()) {
        return 0;
    }

    return t.value() + max(maxSumDescPath(t.left()), maxSumDescPath(t.right()));

}