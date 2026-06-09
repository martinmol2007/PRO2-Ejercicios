#include <cassert>
#include <cstdlib>
#include <iostream>
using namespace std;

template <typename T>
class Stack {
 private:
	struct Item {
		T value;
		Item *next;
	};

	int _size;
	Item *ptopitem;

	Item *_copy_items(Item *pitem) {
		if (pitem == NULL) {
			return NULL;
		}
		Item *pfirst = new Item();
		Item *p = pfirst;
		while (pitem != NULL) {
			p->value = pitem->value;
			if (pitem->next != NULL) {
				p->next = new Item();
			} else {
				p->next = NULL;
			}
			p = p->next;
			pitem = pitem->next;
		}
		return pfirst;
	}

	void _delete_items() {
		Item *p = ptopitem;
		while (p != NULL) {
			Item *pitemaux = p;
			p = p->next;
			delete pitemaux;
		}
		_size = 0;
	}

 public:
	Stack() {
		ptopitem = NULL;
		_size = 0;
	}

	Stack(const Stack<T>& s) {
		ptopitem = _copy_items(s.ptopitem);
		_size = s._size;
	}

	~Stack() {
		_delete_items();
	}

	Stack<T>& operator=(const Stack<T>& s) {
		if (this != &s) {
			_delete_items();
			ptopitem = _copy_items(s.ptopitem);
			_size = s._size;
		}
		return *this;
	}

	int size() {
		return _size;
	}

	bool empty() const {
		return ptopitem == NULL;
	}

	void push(T value) {
		Item *pnewitem = new Item();
		pnewitem->value = value;
		pnewitem->next = ptopitem;
		ptopitem = pnewitem;
		_size++;
	}

	void pop() {
		assert(ptopitem != nullptr);
		Item *paux = ptopitem;
		ptopitem = ptopitem->next;
		delete paux;
		_size--;
	}

	T top() {
		assert(ptopitem != nullptr);
		return ptopitem->value;
	}

	const T top() const {
		assert(ptopitem != nullptr);
		return ptopitem->value;
	}

	void print() {
		cout << "<top>";
		Item *p = ptopitem;
		if (ptopitem != nullptr) {
			cout << " " << p->value;
			p = p->next;
			while (p != nullptr) {
				cout << ", " << p->value;
				p = p->next;
			}
		}
		cout << " <bottom>" << endl;
	}

 public:
	/**************************************************************************
	 * @pre:  La pila (parámetro implícito) está ordenada
	 *        de menor (bottom) a mayor (top).
	 *
	 * @post: Se ha introducido en la pila p.i. de forma ordenada
	 *        un nodo con contenido 'value'.
	 */
	void push_sort(T value) {
		Item* nodo = new Item();

		if(_size == 0) {
			ptopitem = nodo;
			nodo->value = value;
			nodo->next = nullptr;
		}
		else if(value > ptopitem->value) {
			nodo->value = value;
			nodo->next = ptopitem;
			ptopitem = nodo;
		}
		else {
			Item* prev = ptopitem;
			Item* curr = ptopitem->next;

			while(curr != nullptr && curr->value >= value) {
				prev = curr;
				curr = curr->next;
			} 

			nodo->value = value;
			nodo->next = curr;
			prev->next = nodo;		
		}

		_size++;
	}

	/**************************************************************************/
};
