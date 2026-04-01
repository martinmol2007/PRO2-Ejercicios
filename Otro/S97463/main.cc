#include <iostream>
#include <list>
#include <sstream>
#include "fruit.hh"
using namespace std;

/**
 * @brief Fusiona dues llistes ordenades preservant l'ordre.
 *
 * @param a Llista ordenada (pot contenir noms repetits).
 * @param b Llista ordenada (pot contenir noms repetits).
 *
 * @return Llista ordenada amb els elements d'a i b.
 */
list<Fruit> fusio_ordenada(const list<Fruit>& a, const list<Fruit>& b);

//

list<Fruit> llegeix_fruites() {
    list<Fruit> fruits;
    string line;
    while (getline(cin, line) && !line.empty()) {
        string name;
        int price;
        istringstream iss(line);
        iss >> name >> price;
        fruits.push_back(Fruit(name, price));
    }
    return fruits;
}

void escriu_fruites(const list<Fruit>& fruits) {
    for (const Fruit& f : fruits) {
        cout << f.name() << " " << f.price() << endl;
    }
}

int main() {
    list<Fruit> a = llegeix_fruites();
    list<Fruit> b = llegeix_fruites();

    // Cridem la funció d'interès
    list<Fruit> result = fusio_ordenada(a, b);

    escriu_fruites(result);
}