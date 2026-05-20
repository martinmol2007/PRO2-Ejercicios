
bool buscar_rec(const T& x, node_arbreGen* n) const {
    // Miramos que no sea nulo, si no no podemos acceder al resto
    if(n == nullptr) return false;

    // Miramos si esta aqui
    if(n->info == x) return true;
    
    for(int i = 0; i < n->seg.size(); i++) {
        if(buscar_rec(x, n->seg[i])) return true;
    }

    return false;
}


/* Pre: cert */
/* Post: el resultat indica si x es troba al p.i. o no */
bool buscar(const T& x) const {
    if(primer_node == nullptr) return false;
    return buscar_rec(x, primer_node);
}