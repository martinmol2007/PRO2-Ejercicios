#include <list>
#include <string>
using namespace std;

void inserta_don(list<string>& texto) {
    list<string>::iterator it = texto.begin();
    string camilo = "Camilo";

    while (it != texto.end()) {
        if (*it == camilo) {
            it = texto.insert(it, "Don"); // Apunta a Don
            it++; // Apunta a Camilo
        }
        it++;
    }
}