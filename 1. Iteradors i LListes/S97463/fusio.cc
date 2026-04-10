#include <list>
#include <string>
#include "fruit.hh"
using namespace std;

list<Fruit> fusio_ordenada(const list<Fruit>& a, const list<Fruit>& b) {
    list<Fruit>::const_iterator it_a = a.begin();
    list<Fruit>::const_iterator it_b = b.begin();

    list<Fruit> res;

    while (it_a != a.end() && it_b != b.end()) {
        if ((*it_a).is_greater_than((*it_b))) {
            res.push_back((*it_a));
            it_a++;
        } else {
            res.push_back((*it_b));
            it_b++;
        }
    }

    while (it_a != a.end()) {
        res.push_back((*it_a));
        it_a++;
    }

    while (it_b != b.end()) {
        res.push_back((*it_b));
        it_b++;
    }

    return res;
}
