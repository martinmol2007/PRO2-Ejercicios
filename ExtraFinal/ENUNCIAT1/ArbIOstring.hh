#ifndef ARBIOSTRING_HH
#define ARBIOSTRING_HH

#include "Arbre.hh"

// Lectura d'un arbre binari d'enters, acci�.  Els elements 
// s'introdueixen en preordre: primer l'arrel, despr�s el subarbre
// esquerre i per �ltim el dret. Els arbres buits es
// representen amb la marca.

/* Exemple: l'arbre 

     1
   /   \
  2     3

   es llegeix 1 2 0 0 3 0 0 (o amb els numeros en distintes l�nies) */


void llegir_arbre_string(Arbre<string>& a, string marca){
/* Pre: a es buit; el canal estandar d'entrada cont� el recorregut en preordre
   d'un arbre binari A d'enters marcat amb "marca" */  
/* Post: a = A */
  Arbre<string> a1;
  Arbre<string> a2;
  string x;
  cin >> x;
  if (x!= marca) {
    llegir_arbre_string(a1, marca);
    llegir_arbre_string(a2, marca);
    a.plantar(x,a1,a2);
  }
}

// Escriptura d'un arbre binari d'enteros, acci�.  Els elements 
// s'escriuen en inordre: primer el subarbre 
// esquerre, despr�s l'arrel i per �ltim el dret.   

/* Exemple: l'arbre 

     1
   /   \
  2     3

   s'escriu 2 1 3 */


void i_escriure_arbre_string(Arbre<string> &a, string marca) {
/* Pre: cert */ 
/* Post: El canal estandar de sortida cont� el recorregut en inordre d'a */ 
  if (not a.es_buit()) {
    Arbre<string> a1;
    Arbre<string> a2;
    string x = a.arrel();
    a.fills(a1,a2);
    cout << " " << x;
    i_escriure_arbre_string(a1, marca); 
    i_escriure_arbre_string(a2, marca);
    a.plantar(x,a1,a2);
  } else {
    cout << " " << marca;
  }
}


void escriure_arbre_string(Arbre<string> &a, string marca) {
  i_escriure_arbre_string(a, marca);
  cout << endl;
}

#endif
