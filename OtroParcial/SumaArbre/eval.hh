#include <iostream>
#include <string>
#include "bintree.hh"

/**
 * @brief Avalua un arbre no buit que representa una expressió.
 *
 * L'expressió és sobre els naturals i els operadors +, -, i *. 
 * Les operacions de l'arbre no produeixen errors d'_overflow_ (sobreeiximent).
 *
 * @pre L'arbre és no buit i l'expressió és correcta.
 *
 * @param t Arbre que representa l'expressió.
 * @return Resultat de l'avaluació de l'expressió.
 */
int evaluate(pro2::BinTree<std::string> t);