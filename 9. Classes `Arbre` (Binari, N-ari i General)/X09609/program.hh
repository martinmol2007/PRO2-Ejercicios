/* Pre: cert */
/* Post: el resultat.second apunta al node de menys distancia al node 
n que conte x del nodes que pengen de n i el resultat.first es aquesta distancia
*/
static pair<int, node_arbre*> i_cerca_x(node_arbre* n, const T& x, int dist) {
    if (n == nullptr) return {1e9, nullptr};
    else if (n->info == x) return {dist, n};
    else {
        pair<int, node_arbre*> i = i_cerca_x(n->segE, x, dist+1);
        pair<int, node_arbre*> d = i_cerca_x(n->segD, x, dist+1);

        if (d.first < i.first) return d;
        else return i;
    }
}


/* Pre: p.i. = A, asub es buit */
/* Post: si A conte x, asub es el subarbre d'A resultat de la cerca;
   si A no conte x, asub es buit */
void sub_arrel(Arbre& asub, const T& x) {
    pair<int, node_arbre*> res = i_cerca_x(primer_node, x, 0);
    asub.primer_node = copia_node_arbre(res.second);
}