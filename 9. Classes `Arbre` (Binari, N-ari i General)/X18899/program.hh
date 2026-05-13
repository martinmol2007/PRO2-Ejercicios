
node_arbreNari* arbsuma_rec(node_arbreNari* pi) const {
    if (pi == nullptr) {
        return nullptr;
    }
    
    node_arbreNari *n = new node_arbreNari;
    n->info = pi->info;
    n->seg = vector<node_arbreNari*>(pi->seg.size(), nullptr);
    for(int i = 0; i < pi->seg.size(); i++) {
        n->seg[i] = arbsuma_rec(pi->seg[i]);
        if (n->seg[i] != nullptr) {
            n->info += n->seg[i]->info;
        }
    }
    return n;
}



void arbsuma(ArbreNari& asum) const {
    // if (asum.primer_node != nullptr) {
    //     esborra_node_arbreNari(asum.primer_node);
    // }
    asum.N = N;
    asum.primer_node = arbsuma_rec(primer_node);
}
/* Pre: cert */
/* Post: asum és un arbre amb la mateixa estructura que el p.i.
         i cada node és la suma del node corresponent al p.i
         i tots els seus descendents al p.i. */