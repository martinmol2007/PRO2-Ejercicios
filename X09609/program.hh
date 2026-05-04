/* Pre: cert */
/* Post: el resultat es NULL si m es NULL;
   en cas contrari, el resultat apunta al node arrel 
   d'una jerarquia de nodes que es una copia de la
   jerarquia de nodes que te el node apuntat per m com a arrel */
static node_arbre* copia_node_arbre(node_arbre* m) {

}


// Pre: 
// Post: El resultat.second apunta al node de menos distancia que contiene x que cuelgan de n i el resultat.first es la distancia
static pair<int, node_arbre*> i_cerca_x (node_arbre* n, const T& x, int dist) {
    if (n == nullptr) return {-1, nullptr};
    else if (n->info == x) return {dist, n};
    else {
        pair<int, node_arbre*> i = i_cerca_x(n->segE, x, dist+1);
        pair<int, node_arbre*> d = i_cerca_X(n->segD, x, dist+1);

        if(d.first != -1 && d.first < i.first) {
            return d;
        }
        else {
            return i;
        }
    }
}


/* Pre: p.i. = A, asub es buit */
/* Post: si A conte x, asub es el subarbre d'A resultat de la cerca; 
         si A no conte x, asub es buit 
*/
void sub_arrel(Arbre& asub, const T& x) {
    pair<int, node_arbre*> res = i_cerca_x(primer_node, x, 0);
    asub.primer_node = copia_node_arbre (res.second);
}

