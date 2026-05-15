
int suma(node_arbre* n, const T& x)  const {
    int h = 0;
    if (n->info == x) h++;

    if (n->segD != nullptr) h += suma(n->segD, x);
    if (n->segE != nullptr) h += suma(n->segE, x);
    return h;
}

int freq(const T& x) const {
    if (primer_node == nullptr) return 0;
    return suma(primer_node, x);
}
/* Pre: cert */
/* Post: el resultat indica el nombre d'aparicions de x en el p.i. */