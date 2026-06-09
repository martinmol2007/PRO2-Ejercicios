#include <cassert>
#include <iostream>
#include <sstream>
using namespace std;

template <typename T>
class Queue {
 private:
    struct Item {
        T value;
        Item *next;
    };

    Item *first, *last;
    int _size;

    void _copy_items(const Item *item, Item *(&first), Item *(&last), int& _size) {
        if (item == nullptr) {
            first = nullptr;
            last = nullptr;
            _size = 0;
            return;
        }
        first = new Item();
        first->value = item->value;
        last = first;
        _size = 1;
        while (item->next != nullptr) {
            last->next = new Item();
            last = last->next;
            item = item->next;
            last->value = item->value;
            _size++;
        }
        last->next = nullptr;
    }

    void _delete_items(Item *item) {
        while (item != nullptr) {
            Item *aux = item;
            item = item->next;
            delete aux;
        }
    }

 public:
    Queue() {
        first = last = nullptr;
        _size = 0;
    }

    Queue(Queue& q) {
        _copy_items(q.first, first, last, _size);
    }

    ~Queue() {
        _delete_items(first);
        _size = 0;
    }

    Queue& operator=(const Queue& q) {
        if (this != &q) {
            _delete_items(first);
            _copy_items(q.first, first, last, _size);
        }
        return *this;
    }

    T front() {
        assert(first != nullptr);
        return first->value;
    }

    void pop() {
        assert(first != nullptr);
        Item *aux = first;
        first = first->next;
        delete aux;
        _size--;
        if (first == nullptr) {
            last = nullptr;
        }
    }

    void push(T value) {
        Item *pitem = new Item();
        pitem->value = value;
        pitem->next = nullptr;
        if (first == nullptr) {
            first = last = pitem;
            _size = 1;
            return;
        }
        last->next = pitem;
        last = pitem;
        _size++;
    }

    int size() {
        return _size;
    }

    /**
     * @brief parses a queue in the format '{e1, e2, ..., eN}'
     */
    static bool parse(std::istream& in, Queue<T>& Q) {
        Q = Queue<int>();  // clear the queue

        char first;
        in >> first;  // this will skip all spaces!
        if (!in) {
            return false;
        }
        assert(first == '{');

        string line;
        getline(in, line);
        if (!in) {
            return false;
        }

        // Until last '}'
        int i = 0;
        string elem = "";
        while (i < line.size() && line[i] != '}') {
            if (line[i] == ',') {
                std::istringstream iss(elem);
                int value;
                iss >> value;
                if (!iss) {
                    return false;
                }
                Q.push(value);
                elem = "";
            } else {
                elem += line[i];
            }
            i++;
        }
        if (i == line.size()) {
            return false;
        }
        assert(!elem.empty());
        std::istringstream iss(elem);
        int value;
        iss >> value;
        if (!iss) {
            return false;
        }
        Q.push(value);

        return true;
    }

    void print(std::ostream& out) const {
        out << "{";
        if (_size > 0) {
            out << first->value;
            for (auto *item = first->next; item != nullptr; item = item->next) {
                out << ", " << item->value;
            }
        }
        out << "}" << endl;
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    //   Feu la vostra implementació aquí
    //   👇🏻👇🏻👇🏻

 public:
    /**
     * @brief Parteix la cua en dos en el punt on es troba el
     *        primer node amb valor `x`. La cua original manté els
     *        valors des del principi fins a `x` (no inclòs), i `p`
     *        rebrà els valors desde `x` fins al final. Si `x` no
     *        apareix a la cua, no es modifica la cua i tampoc `p`.
     *
     * @pre   `p` es una altra cua, buida.
     *
     * @post  Si la cua (p.i.) no conté el valor `x` la cua no ha canviat.
     *        Si la cua conté `x`, s'han traspassat a `p` els elements a partir
     *        del primer `x` trobat.
     */
    void split(const T& val, Queue& p) {
        // Caso especial, el valor esta en el primer nodo, por lo tanto, hay que mover todo la lista
        // Hay que mover toda la lista
        if(first->value == val) {
            p.first = first;
            p.last = last;
            p._size = _size;

            _size = 0;
            first = nullptr;
            last = first;

            return;
        } 

        // Sabemos que en el primero no va a estar
        
        Item* prev = first;
        Item* curr = first->next;

        int mida_org = _size;
        int cont = 1;

        while(curr != nullptr && curr->value != val) {
            prev = curr;
            curr = curr->next;
            cont++;
        }
        // Hemos salido porque hemos encontrado un nodo igual que val
        // Si no, no esta, entonces, no hay que tocar nada
        if(curr != nullptr) {
            Item* aux_last = last;

            last = prev;
            last->next = nullptr;

            p.first = curr;
            p.last = aux_last;
            p.last->next = nullptr;

            p._size = mida_org - cont;
            _size = cont;
        }
    }

    //////////////////////////////////////////////////////////////////////////////
};
