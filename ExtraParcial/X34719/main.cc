#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;


struct info {
    set<string> paths;
    int ultimo_acceso;
    int veces = 1;
    bool es_bot = false;
};


int main () {
    string IP, camino;
    int temps;

    map<string, info> mapa;

    while (cin >> IP >> camino >> temps) {
        auto it = mapa.find(IP);

        if (it == mapa.end()) {
            info i;
            i.ultimo_acceso = temps;
            i.paths = {camino};
            mapa.insert({IP, i});
        } else {
            it->second.paths.insert(camino);

            if (temps - it->second.ultimo_acceso <= 100) {
                it->second.veces++;
                if (it->second.veces >= 20) {
                    it->second.es_bot = true;
                } 
            }
            else {
                it->second.veces = 1;
            }
            it->second.ultimo_acceso = temps;
            
        }
    }
}