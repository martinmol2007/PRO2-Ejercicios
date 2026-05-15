#include <iostream>
#include <map>

using namespace std;

int main () {
    char comando;
    string palabra;
    map<string, int> mapa;


    while (cin >> comando >> palabra) {
        if (comando == 'a') {
            mapa[palabra]++;
        }
        if (comando == 'f') {
            map<string, int>::iterator it;
            it = mapa.find(palabra);
            if (it == mapa.end()) cout << "0" << endl;
            else cout << it->second << endl;
        }
        if (comando == 'e') {
            int num = mapa[palabra];
            if (num  >= 1) mapa[palabra]--;
            else mapa[palabra] = 0;
        }
    }
    
    return 0;
}