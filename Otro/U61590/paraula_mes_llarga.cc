
#include <list>
#include <string>
using namespace std;

list<string>::const_iterator paraula_mes_llarga(const list<string>& text) {
    if (text.empty()) return text.end();
  
    list<string>::const_iterator it = text.begin();
    list<string>::const_iterator it_max = text.begin();

    while (it != text.end()) {
        if ((*it).size() > (*it_max).size()) {
            it_max = it;
        }
        it++;
    }
 
    return it_max;
}
