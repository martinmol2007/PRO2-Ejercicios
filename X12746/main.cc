#include <iostream>
#include <string>
#include <map>

using namespace std;

int get_posicion (int index, int num_izq) {
    return index - num_izq;
}

int main() {

  map<int, int> m;
  // first: Posicion second: Valor
  int num_izq = 0;
  // Indica cuantos elementos hay por la izquierda de la posicion del 0
  int tam_real = 0;
  // Numero de elementos total

  string command;

  while (cin >> command) {
    if (command == "v.push_back(") {
      int val;
      cin >> val;
      string ending;
      cin >> ending; // consume ");"
 
      int index = tam_real;
      int pos = get_posicion(index, num_izq);
      m[pos] = val;
      tam_real++;

    } else if (command == "v.push_front(") {
      int val;
      cin >> val;
      string ending;
      cin >> ending; // consume ");"
      
      int index = -1;
      int pos = get_posicion(index, num_izq);

      m[pos] = val;
      num_izq++;
      tam_real++;

    } else if (command == "v.pop_front();") {
      m.erase(m.begin());
      num_izq--;
      tam_real--;

    } else if (command == "v.pop_back();") {
      int index = tam_real - 1;
      int pos = get_posicion(index, num_izq);
      auto it = m.find(pos);
      if (it != m.end()) {
        m.erase(it);
      }
      tam_real--;   // <-- SIEMPRE hay que decrementar

    } else if (command == "v.resize(") {
      int newsize;
      cin >> newsize;
      string ending;
      cin >> ending; // consume ");"
      
      if (newsize < tam_real) {
        if (newsize == 0) {
          m.clear();
        } else {
          int last_index = newsize - 1;              // ultimo índice válido
          int last_pos = get_posicion(last_index, num_izq);

          // borrar todo lo que quede a la derecha del nuevo final
          auto it = m.upper_bound(last_pos);
          m.erase(it, m.end());
        }
      }

      tam_real = newsize;

    } else if (command == "cout<<v[") {
      int index;
      cin >> index;
      string ending;
      cin >> ending; // consume "];"

      int pos = get_posicion(index, num_izq);
      auto it = m.find(pos);
      if (it != m.end()) cout << it->second << endl;
      else cout << 0 << endl;
      
    } else if (command == "cout<<v;") {
      bool primer = true;
      auto it = m.begin();

      for (int i = 0; i < tam_real; i++) {   // <-- no <=
        if (primer) primer = false;
        else cout << ",";

        int pos = get_posicion(i, num_izq);
        if (it != m.end() && pos == it->first) {
          cout << it->second;
          ++it;
        } else {
          cout << 0;
        }
      }
      cout << endl;

    } else if (command == "v[") {
      int index;
      cin >> index;
      string mid;
      cin >> mid; // consume "]="
      int val;
      cin >> val;
      string ending;
      cin >> ending; // consume ";"
      
      int pos = get_posicion(index, num_izq);
      if (val == 0) {
        m.erase(pos);   // opcional, pero ayuda a mantener el map pequeño
      } else {
        m[pos] = val;
      }

    } else if (command == "//") {
      string comment;
      getline(cin, comment);
      cout << "//" << comment << endl;

    } else {
      cout << "Wrong command '" << command << "'" << endl;
      string discard;
      getline(cin, discard);
    }
  }
}