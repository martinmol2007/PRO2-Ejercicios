// Pre: n != nullptr
// Post: Suma maxima del camino de los nodos que cuelgan de n
T i_suma(node_arbre* n) const {
    if (n->segE == nullptr && n->segD == nullptr) return n->info;
    
    T s_izq = -1e9;
    if (n->segE != nullptr) s_izq = i_suma(n->segE);
    
    T s_der = -1e9;
    if (n->segD != nullptr) s_der = i_suma(n->segD);
    
    return max(s_izq, s_der) + n->info;
}

T max_suma_cami() const {
    return i_suma(primer_node);
}