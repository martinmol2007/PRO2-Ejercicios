#include <iostream>
#include <map>
#include <list>

using namespace std;

list< pair<string, int> > all_pairs(map<string, int>& M) {
   list< pair<string,int> > lista;
   
   for (auto it = M.begin(); it != M.end(); ++it) {
      lista.insert(lista.end() , *it);
   }

   return lista;
}

