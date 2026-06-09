#ifndef ARBRE_HH
#define ARBRE_HH

#include <exception>
#include <iostream>
#include <vector>
using namespace std;

class PRO2Excepcio;	 // Declaració prèvia de la classe PRO2Excepcio (més avall)

// Arbre Genèric //////////////////////////////////////////////////////////////

template <class T>
class ArbreGen {
 private:
	struct node_arbreGen {
		T info;
		vector<node_arbreGen *> seg;
	};

	node_arbreGen *primer_node;

	// especificaci� operacions privades

	static node_arbreGen *copia_node_arbreGen(node_arbreGen *m) {
		/* Pre: cert */
		/* Post: el resultat �s NULL si m �s NULL; en cas contrari, el resultat apunta
		   al node arrel d'una jerarquia de nodes que �s una c�pia de la
		   jerarquia de nodes que t� el node apuntat per m com a arrel */
		node_arbreGen *n;
		if (m == NULL) {
			n = NULL;
		} else {
			n = new node_arbreGen;
			n->info = m->info;
			int ari = m->seg.size();
			n->seg = vector<node_arbreGen *>(ari);
			for (int i = 0; i < ari; ++i) {
				n->seg[i] = copia_node_arbreGen(m->seg[i]);
			}
		}
		return n;
	}

	static void esborra_node_arbreGen(node_arbreGen *m) {
		/* Pre: cert */
		/* Post no fa res si m �s NULL; en cas contrari, allibera espai de tots els nodes
		   de la jerarquia que t� el node apuntat per m com a arrel */
		if (m != NULL) {
			int ari = m->seg.size();
			for (int i = 0; i < ari; ++i) {
				esborra_node_arbreGen(m->seg[i]);
			}
			delete m;
		}
	}

 public:
	// especificaci� operacions p�bliques
	ArbreGen() {
		/* Pre: cert */
		/* Post: el p.i. �s un arbre general buit */
		primer_node = NULL;
	}

	ArbreGen(const T& x) {
		/* Pre: cert */
		/* Post: el resultat �s un arbre general amb arrel x i sense fills */
		primer_node = new node_arbreGen;
		primer_node->info = x;
		// No cal fer primer_node->seg = vector<node_arbreGen*>(0);
	}

	ArbreGen(const ArbreGen& original) {
		/* Pre: cert */
		/* Post: el resultat �s una c�pia d'original */
		primer_node = copia_node_arbreGen(original.primer_node);
	}

	~ArbreGen()
	// Destructora: Esborra autom�ticament els objectes locals en
	// sortir d'un �mbit de visibilitat
	{
		esborra_node_arbreGen(primer_node);
	}

	ArbreGen& operator=(const ArbreGen& original)
	/* Pre: cert */
	/* Post: El p.i. passa a ser una c�pia d'original i qualsevol
	   contingut anterior del p.i. ha estat esborrat
	   (excepte si el p.i. i original ja eren el mateix objecte) */
	{
		if (this != &original) {
			esborra_node_arbreGen(primer_node);
			primer_node = copia_node_arbreGen(original.primer_node);
		}
		return *this;
	}

	void a_buit() {
		/* Pre: cert */
		/* Post: el p.i. �s un arbre general buit i qualsevol
		   contingut anterior del p.i. ha estat esborrat */
		esborra_node_arbreGen(primer_node);
		primer_node = NULL;
	}

	void plantar(const T& x) {
		/* Pre: el p.i. �s buit */
		/* Post: el p.i. t� x com a arrel i zero fills */
		if (primer_node == NULL) {
			primer_node = new node_arbreGen;
			primer_node->info = x;
			// No cal fer primer_node->seg = vector<node_arbreGen*>(0);
		} else {
			throw PRO2Excepcio("El p.i. de plantar ha de ser buit a la crida");
		}
	}

	void plantar(const T& x, vector<ArbreGen>& v) {
		/* Pre:  el p.i. �s buit i v.size()>0 i cap arbre de v �s buit */
		/* Post: el p.i. t� x com a arrel i els elements originals
		   de v com a fills, v passa a contenir arbres buits */
		if (primer_node == NULL) {
			int n = v.size();
			if (n > 0) {
				node_arbreGen *aux = new node_arbreGen;
				aux->info = x;

				aux->seg = vector<node_arbreGen *>(n);
				for (int i = 0; i < n; ++i) {
					if (v[i].primer_node != NULL) {
						aux->seg[i] = v[i].primer_node;
						v[i].primer_node = NULL;
					} else {
						throw PRO2Excepcio("No es pot plantar amb arbres buits al vector");
					}
				}
				primer_node = aux;
			} else {
				throw PRO2Excepcio("No es pot plantar amb un vector buit");
			}
		} else {
			throw PRO2Excepcio("El p.i. de plantar ha de ser buit a la crida");
		}
	}

	void afegir_fill(const ArbreGen& a) {
		/* Pre: el p.i. i a no s�n buits */
		/* Post: el p.i. t� un fill m�s que a l'inici, i aquest nou darrer fill
		   �s una c�pia de l'arbre a */
		(primer_node->seg).push_back(copia_node_arbreGen(a.primer_node));
	}

	void fill(const ArbreGen& a, int i) {
		/* Pre: el p.i. �s buit, a no �s buit, i est� entre 1 i el nombre de fills d'a */
		/* Post: el p.i �s una c�pia del fill i-�ssim d'a */
		primer_node = copia_node_arbreGen((a.primer_node)->seg[i - 1]);
	}

	void fills(vector<ArbreGen>& v) {
		/* Pre:  el p.i. no �s buit i li diem A, v �s un vector buit  */
		/* Post: el p.i. �s buit, v passa a contenir els fills de l'arbre A  */
		if (primer_node != NULL) {
			if (v.size() == 0) {
				node_arbreGen *aux = primer_node;
				int n = aux->seg.size();
				v = vector<ArbreGen>(n);
				for (int i = 0; i < n; ++i) {
					v[i].primer_node = aux->seg[i];
				}
				primer_node = NULL;
				delete aux;
			} else {
				throw PRO2Excepcio("No es pot passar a fills un vector no buit");
			}
		} else {
			throw PRO2Excepcio("Un arbre buit no te fills");
		}
	}

	T arrel() const {
		/* Pre: el p.i. no �s buit */
		/* Post: el resultat �s l'arrel del p.i. */
		if (primer_node != NULL) {
			return primer_node->info;
		} else {
			throw PRO2Excepcio("Un arbre buit no t� arrel");
		}
	}

	bool es_buit() const {
		/* Pre: cert */
		/* Post: el resultat indica si el p.i. �s un arbre buit */
		return (primer_node == NULL);
	}

	int nombre_fills() const {
		/* Pre: el p.i. no �s buit */
		/* Post: el resultat �s el nombre de fills del p.i. */
		if (primer_node != NULL) {
			return (primer_node->seg).size();
		} else {
			throw PRO2Excepcio("Un arbre buit no t� nombre de fills");
		}
	}

 public:
	/***************************************************************************
	 * @pre:  Cierto
	 *
	 * @post: En el parámetro implícito se han sustituido todas las
	 *        apariciones de 'x' por 'y', y el resultado es el número
	 *        de sustituciones realizadas.
	 */
	int sustituir(const T& x, const T& y) {
		return sustituir_aux(primer_node, x, y);
	}
 private:
	static int sustituir_aux(node_arbreGen* n, const T& x, const T& y) {
		if(n == nullptr) return 0;

		int suma = 0;
		
		// Sustituir y sumar ocurrencias
		if(n->info == x) {
			n->info = y;
			suma++;
		}

		for(int i = 0; i < int(n->seg.size()); i++) {
			suma += sustituir_aux(n->seg[i], x, y);
		}

		return suma;
	}
	/**************************************************************************/
};

// Excepció PRO2 //////////////////////////////////////////////////////////////
class PRO2Excepcio : public exception {
 public:
	PRO2Excepcio(const char *mensaje) : _mensaje(mensaje) {}

	const char *what() const throw() {
		return _mensaje;
	};

 private:
	const char *_mensaje;
};

#endif