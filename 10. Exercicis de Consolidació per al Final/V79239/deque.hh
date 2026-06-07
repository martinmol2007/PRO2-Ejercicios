#include <iostream>
using namespace std;

template <typename T>
class Deque {
   private:
	struct Item {
		T value;
		Item *prev;	 // new line
		Item *next;
	};

	Item *first;
	Item *last;
	int _size;

	void copyItems(const Item *item, Item *(&first), Item *(&last), int& _size) {
		if (item == NULL) {
			first = NULL;
			last = NULL;
			_size = 0;
			return;
		}
		first = new Item();
		first->value = item->value;
		last = first;
		_size = 1;
		Item *aux = NULL;  // new line
		while (item->next != NULL) {
			last->next = new Item();
			aux = last;	 // new line
			last = last->next;
			item = item->next;
			last->value = item->value;
			last->prev = aux;  // new line
			_size++;
		}
		last->next = NULL;
	}

	void deleteItems(Item *item) {
		while (item != NULL) {
			Item *aux = item;
			item = item->next;
			delete aux;
		}
	}

   public:
	Deque() {
		first = last = NULL;
		_size = 0;
	}

	Deque(Deque& d) { copyItems(d.first, first, last, _size); }

	~Deque() {
		deleteItems(first);
		_size = 0;
	}

	Deque& operator=(const Deque& d) {
		if (this != &d) {
			deleteItems(first);
			copyItems(d.first, first, last, _size);
		}
		return *this;
	}

	int size() { return _size; }

	template <typename U>
	friend ostream& operator<<(ostream& os, Deque<U>& d);

	template <typename U>
	friend istream& operator>>(istream& is, Deque<U>& d);

	T front() {
		if (first == NULL) {
			cerr << "Error: front on empty deque" << endl;
			exit(0);
		}
		return first->value;
	}

	T back() {
		if (last == NULL) {
			cerr << "Error: last on empty deque" << endl;
			exit(0);
		}
		return last->value;
	}

	void pop_front() {
		if (first == NULL) {
			cerr << "Error: pop on empty deque" << endl;
			exit(0);
		}
		Item *aux = first;
		first = first->next;
		delete aux;
		_size--;
		if (first == NULL) {
			last = NULL;
		} else {
			first->prev = NULL;	 // new line
		}
	}

	void push_back(T value) {
		Item *pitem = new Item();
		pitem->value = value;
		pitem->next = NULL;
		if (first == NULL) {
			pitem->prev = NULL;	 // new line
			first = last = pitem;
			_size = 1;
			return;
		}
		last->next = pitem;
		pitem->prev = last;	 // new line
		last = pitem;
		_size++;
	}

	//////////////////////////////////////////////////////////////////////////////
	//
	//   Feu la vostra implementació aquí
	//   👇🏻👇🏻👇🏻

 public:
	/**
	 * @brief  El Deque<T> (p.i.) perd l'últim element si no està buit.
	 *         Si està buit, s'aborta l'execució i s'envia un
	 *         missatge d'error.
	 *
	 * @pre   El Deque<T> (p.i.) no està buit.
	 * @post  El Deque<T> perd l'últim element.
	 */
	void pop_back() {
		if (last == NULL) {
			cerr << "Error: pop on empty deque" << endl;
			exit(0);
		}
		Item *aux = last;
		last = last->prev;
		delete aux;
		_size--;
		if (last == NULL) {
			first = NULL;
		} else {
			last->next = NULL;	 // new line
		}
	}

	/**
	 * @brief  Afegeix un element al principi del Deque<T> (el "front").
	 *
	 * @param x L'element a afegir.
	 * @post  El Deque<T> (p.i.) té un element més al principi i el nou
	 *        element té el valor `x`.
	 */
	void push_front(const T& value) { 
		Item *pitem = new Item();
		pitem->value = value;
		pitem->next = first;
		if (last == NULL) {
			pitem->next = NULL;	 // new line
			first = last = pitem;
			_size = 1;
			return;
		}
		first->prev = pitem;
		pitem->prev = NULL;	 // new line
		first = pitem;
		_size++;
    }

	//////////////////////////////////////////////////////////////////////////////
};

template <typename U>
ostream& operator<<(ostream& os, Deque<U>& d) {
	for (typename Deque<U>::Item *item = d.first; item != NULL; item = item->next) {
		os << " " << item->value;
	}
	return os;
}

template <typename U>
istream& operator>>(istream& is, Deque<U>& d) {
	int size;
	is >> size;
	if (size == 0) {
		d = Deque<U>();
		return is;
	}
	for (int i = 0; i < size; ++i) {
		U x;
		cin >> x;
		d.push_back(x);
	}
	return is;
}
