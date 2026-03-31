#include <list>
#include <string>
using namespace std;

void inserta_don(list<string>& texto) {
    auto it = texto.begin();

    while (it != texto.end()) {
        if (*it == "Camilo") {
            it = texto.insert(it, "Don");
            it++;
        }
        it++;
    }
}