// a parametro implicito
static void arbsuma_rec (node_arbreNari* a, node_arbreNari* asum)  {
    if(a == nullptr) {
        asum = nullptr;
        return;
    } else {
        int tam = a->seg.size();

        asum = new node_arbreNari;
        asum->seg = vector<node_arbreNari*>(tam, nullptr);

        int suma  = a->info;
        
        for(int i = 0; i < tam; i++) {
            // HI: en asum->seg[i] esta el arbol de sumas de a->seg[i]
            arbsuma_rec(a->seg[i], asum->seg[i]);
            if(asum->seg[i] != nullptr) suma += asum->seg[i]->info;
        }

        asum->info = suma;
    }
}

void arbsuma(ArbreNari& asum) const {
    arbsuma_rec(primer_node, asum.primer_node);
}
/* Pre: cert */
/* Post: asum és un arbre amb la mateixa estructura que el p.i.
         i cada node és la suma del node corresponent al p.i
         i tots els seus descendents al p.i. */