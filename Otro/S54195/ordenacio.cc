#include <list>
using namespace std;

list<int>::iterator minim (list<int>::iterator begin, list<int>::iterator end) {
    auto it_min = begin;
    int min = *it_min;

    while (begin != end) {
        if ((*begin) < min) {
            it_min = begin;
            min = *begin;
        }
        begin++;
    }

    return it_min;
}

void ordenacio_seleccio(list<int>::iterator begin, list<int>::iterator end) {

    while (begin != end) {
        auto it = minim(begin, end);
        swap(*begin, *it);
        begin++;
    }
}
