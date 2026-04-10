#pragma once
#include <list>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriu;

struct Casella {
    int pos;    // índex de columna
    int valor;  // valor de l'element
};

struct MatriuEsparsa {
    int ncols;                   // nombre de columnes
    vector<list<Casella>> files; // files de la matriu esparsa
};
