#include <iostream>
#include <queue>
#include <sstream>
#include <string>
using namespace std;

/**
 * @brief Simula un algorisme "Round Robin" amb un vector de cues
 *
 * La funció itera circularment (és a dir, considerant l'element n-1 com l'inmediatament anterior al
 * 0) el vector de cues, i va afegint els elements que treu del capdavant de cada cua en una cua
 * resultat.
 *
 * @param  queues  Les cues d'entrada
 * 
 * @returns La cua resultant d'aplicar l'algorisme "Round Robin"
 */
queue<std::string> round_robin(vector<queue<std::string>>& queues) {
    queue<string> cola;
    int n = queues.size();
    bool fin = false;

    while (not fin) {
        fin = true;
        for (int i = 0; i < n; ++i) {
            if (not queues[i].empty()) {
                cola.push(queues[i].front());
                queues[i].pop();
                fin = false;
            } 
        }   
    }
    return cola;
}

/*
queue<std::string> round_robin(vector<queue<std::string>>& queues) {
    bool vacio = false; 

    queue<string> cola;
    vector<bool> cola_vacio (queues.size());

    while (not vacio) {
        for (int i = 0; i < queues.size(); i++) {
            if(not queues[i].empty()) {
                cola.push(queues[i].front());
                queues[i].pop();
            } else {
                cola_vacio[i] = true;
            }
        }
        int cont = 0;
        for (int i = 0; i < cola_vacio.size(); i++){
            if (cola_vacio[i]) cont++;
        }
        if (cont == queues.size()) vacio = true;
    }
    return cola;
}
*/