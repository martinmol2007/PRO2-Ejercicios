#ifndef ARBREN_HH
#define ARBREN_HH

#include "utils.PRO2"
#include <vector>

template <class T> class ArbreNari { 
  private:     
    struct node_arbreNari {
        T info;
        vector<node_arbreNari*> seg;
    };
    int N;
    node_arbreNari* primer_node;
	
   // especificaci� operacions privades
 
static node_arbreNari* copia_node_arbreNari(node_arbreNari* m) { 
/* Pre: cert */
/* Post: el resultat �s NULL si m �s NULL; en cas contrari, el resultat apunta
         al node arrel d'una jerarquia de nodes que �s una c�pia de la 
         jerarquia de nodes que t� el node apuntat per m com a arrel */
  node_arbreNari* n;
  if (m == NULL) n = NULL;
  else {
    n = new node_arbreNari;
    n->info = m->info;
    int ari = m->seg.size();
    n->seg = vector<node_arbreNari*>(ari);
    for (int i = 0; i < ari; ++i) 
      n->seg[i] = copia_node_arbreNari(m->seg[i]);
  }
  return n;
}

static void esborra_node_arbreNari(node_arbreNari* m) {  
/* Pre: cert */
/* Post no fa res si m �s NULL; en cas contrari, allibera espai de tots els nodes
        de la jerarquia que t� el node apuntat per m com a arrel */
  if (m != NULL) {
    int ari = m->seg.size();
    for (int i = 0; i < ari; ++i) 
      esborra_node_arbreNari(m->seg[i]);
    delete m;
  }
}


static int i_altura(node_arbreNari* t, int size) {
  if (t == NULL) return 0;
  int max_height = 0;
  for (int i = 0; i < size; ++i) {
    int height = i_altura(t->seg[i], size);
    if (height > max_height) max_height = height;
  }
  return max_height + 1;
}

//Extensió-------------------------------
//Completa la funció:

// Pre: h >= altura(p), n és l'aritat de l'ArbreNari<T> al qual pertany
// la jerarquia apuntada per p
// Post: la jerarquia apuntada per p ha estat completada a un arbre
// complet d'altura h, afegint els nodes necessaris amb valor v
static void i_completa(node_arbreNari* &p, int N, int h, const T& v) {
  if(h > 0) {
    if (p == nullptr) {
      p = new node_arbreNari;
      // Rellenar los elemenos del nodo
      p->info = v;
      p->seg = vector<node_arbreNari*> (N);
  }

    for(int i = 0; i < N; i++) {
      i_completa(p->seg[i], N, h-1, v);
    }
  }
}
  public:
    // especificaci� operacions p�bliques

ArbreNari(int n) {
/* Pre: cert */
/* Post: el p.i. �s un arbre buit d'aritat n */
  N = n;
  primer_node= NULL;
}

ArbreNari(const T &x, int n) {
/* Pre: cert */
/* Post: el p.i. �s un arbre amb arrel x i n fills buits */
  N = n;
  primer_node= new node_arbreNari;
  primer_node->info = x;
  primer_node->seg = vector<node_arbreNari*>(N);
  for (int i=0; i<N; ++i) 
    primer_node->seg[i] = NULL;
}

ArbreNari(const ArbreNari& original) {
/* Pre: cert */
/* Post: el p.i. �s una c�pia d'original */
  N = original.N;
  primer_node = copia_node_arbreNari(original.primer_node);
}

~ArbreNari() 
// Destructora: Esborra autom�ticament els objectes locals en
// sortir d'un �mbit de visibilitat
{
  esborra_node_arbreNari(primer_node);
}

ArbreNari& operator=(const ArbreNari& original) 
/* Pre: cert */
/* Post: El p.i. passa a ser una c�pia d'original i qualsevol
     contingut anterior del p.i. ha estat esborrat 
     (excepte si el p.i. i original ja eren el mateix objecte) */
{
  if (this != &original) {
    esborra_node_arbreNari(primer_node);
    N = original.N;
    primer_node = copia_node_arbreNari(original.primer_node);
  }
  return *this;
}

void a_buit() {
/* Pre: cert */
/* Post: el p.i. �s un arbre buit */
  esborra_node_arbreNari(primer_node);
  primer_node= NULL;
}        

void plantar(const T &x, vector<ArbreNari> &v) {
/* Pre:  el p.i. �s buit i la longitud de v �s igual a l'aritat del p.i.*/
/* Post: el p.i. t� x com a arrel i els N elements originals  
         de v com a fills, v passa a contenir arbres buits */
  if (primer_node==NULL){
    if (v.size()==N){ 
      node_arbreNari* aux= new node_arbreNari;
      aux->info= x;
      aux->seg = vector<node_arbreNari*>(N);
      for (int i=0; i<N; ++i) {
	aux->seg[i] = v[i].primer_node;
	v[i].primer_node = NULL;
      }
      primer_node = aux;
    }
    else throw PRO2Excepcio("Al plantar, el size del vector ha de ser igual a l'aritat de l'arbre");
  }
  else throw PRO2Excepcio("El p.i. de plantar ha de ser buit a la crida");
}


void fills(vector<ArbreNari> &v) {
/* Pre:  el p.i. no �s buit i li diem A, v �s un arbre buit */
/* Post: el p.i. �s buit, v passa a contenir els N fills de l'arbre A  */
  if (primer_node!=NULL){
    if (v.size()==0){ 
      node_arbreNari* aux= primer_node;
      v= vector<ArbreNari> (N,ArbreNari(N));
      for (int i=0; i<N; ++i) 
	v[i].primer_node = aux->seg[i];  
      primer_node= NULL;
      delete aux;
    }
    else throw PRO2Excepcio("No es pot passar a fills un vector no buit");
  }
  else throw PRO2Excepcio("El p.i. de fills no pot ser buit a la crida");
}

T arrel() const {
/* Pre: el p.i. no �s buit */
/* Post: el resultat �s l'arrel del p.i. */
  if (primer_node != NULL)   return primer_node->info;
  else throw PRO2Excepcio("El p.i. d'arrel no pot ser buit a la crida");
}

bool es_buit() const {
/* Pre: cert */
/* Post: el resultat indica si el p.i. �s un arbre buit */
    return (primer_node == NULL);
}



int aritat() const {
/* Pre: cert */
/* Post: el resultat �s l'aritat del p.i. */
    return N;
}

int altura() const {
  return i_altura(primer_node, N);
}

//Extensió-------------------------------
// Pre: el p.i. és un arbre N-ari A
// Post: el p.i. és l'arbre complet que completa A amb el mínim nombre de nodes;
// els nodes que són al p.i. però no eren a A contenen el valor v
void completa(const T& v) {
  int h = altura();
  i_completa(primer_node, N, h, v);
}

};

#endif
