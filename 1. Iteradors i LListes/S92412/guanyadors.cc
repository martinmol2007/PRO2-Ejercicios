#include <string>
#include <vector>
using namespace std;

#include "player.hh"

/*
   Implementa la funció `winners` i envia només aquest fitxer al Jutge.
*/
vector<string> winners(vector<Player>::iterator begin, vector<Player>::iterator end) {
   vector<Player>::iterator it = begin;

   // Primer busquem el maxim
   int max = (*it).score;
   while (it != end) {
      if (it->score > max) {
         max = it->score;
      }
      it++;
   }

   // Ahora sacamos los que tienen ese maximo
   vector<string> v;
   while (begin != end) {
      if ((*begin).score == max) {
         v.push_back((*begin).name);
      }
      begin++;
   }

   return v;
}
