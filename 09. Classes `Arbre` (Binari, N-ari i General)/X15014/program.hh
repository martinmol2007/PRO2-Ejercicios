
static node_arbre* i_sumes(node_arbre* n)  {
    if (n == nullptr) return nullptr;
    else {
        // HI: i es el arbol de sumas del punteros segE de n
        node_arbre* i = i_sumes(n->segE);
        // HI: i es el arbol de sumas del punteros segD de n
        node_arbre* d = i_sumes(n->segD);

        node_arbre* r = new node_arbre;
        r->segD = d;
        r->segE = i;
        r->info = n->info;

        if (i != nullptr) {
            r->info += i->info;
        }
        if (d != nullptr) {
            r->info += d->info;
        }

        return r;
    }
}

/* Pre: cert */
/* Post: l'arbre asum és l'arbre suma del p.i. */
void arb_sumes(Arbre<int>& asum) const {
    node_arbre* n = i_sumes(primer_node); // Nos devuelve un puntero que apunta al arbol de sumas
    asum.primer_node = n;
}