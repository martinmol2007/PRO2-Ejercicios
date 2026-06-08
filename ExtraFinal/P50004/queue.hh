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
     * @brief Elimina de la cua els duplicats consecutius: per a cada
     *        seqüència de nodes consecutius amb el mateix valor només
     *        se'n manté el primer i s'esborren la resta.
     *
     * @post  La cua no conté dos nodes consecutius amb el mateix valor.
     *        L'ordre relatiu dels valors que queden no canvia.
     */
    void remove_consecutive_duplicates() {
        if(_size == 0 or _size == 1) return;
        // Ens asegurem de que el size es mayor o igual que dos
        Item* prev = first;
        Item* curr = first->next;
        while(curr != nullptr) {
            if(prev->value == curr->value) {
                Item* aux = curr;
                curr = curr->next;
                
                delete aux;

                prev->next = curr;
                _size--;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
    }

    //////////////////////////////////////////////////////////////////////////////
};
