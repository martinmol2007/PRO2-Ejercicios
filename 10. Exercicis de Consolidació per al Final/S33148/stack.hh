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
        if (ptopitem != nullptr) {
            cout << " " << ptopitem->value;
            Item *p = ptopitem->next;
            while (p != nullptr) {
                cout << ", " << p->value;
                p = p->next;
            }
        }
        cout << " <bottom>" << endl;
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    //   Feu la vostra implementació aquí
    //   👇🏻👇🏻👇🏻

 public:
    /**
     * @post: S'ha eliminat de la pila l'element `i`-èssim, amb `i` en el
     *        rang de 0 a N-1, sent N la mida de la pila. Si l'índex no
     *        està en el rang 0 a N-1, la pila no canvia.
     */
    void eliminar(int i) {
        if(_size == 0 or i >= _size or i < 0) return;
        if(i == 0) {
            Item* aux = ptopitem;
            ptopitem = ptopitem->next;
            delete aux;
        }
        else {
            Item* aux = ptopitem;

            while(i > 1) {
                aux = aux->next;
                i--;
            }

            Item* borrar = aux->next;
            aux->next = borrar->next;
            delete borrar;
        }

        _size--;
    }

    //////////////////////////////////////////////////////////////////////////////
};
