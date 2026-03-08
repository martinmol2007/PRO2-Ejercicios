#include <iostream>
#include <list>

using namespace std;


/* Pre: uno = U */
/* Post: uno pasa a ser la interseccion de U y dos */
void inter(list<int>& uno, const list<int>& dos ) {
    list<int>::iterator it1 = uno.begin();
    list<int>::const_iterator it2 = dos.begin();

    while (it1 != uno.end() && it2 != dos.end()) {
        if (*it1 < *it2) {
            it1 = uno.erase(it1);
        } 
        else if (*it1 == *it2) {
            it1++;
            it2++;
        } 
        else {
            it2++;
        }
    }

    while (it1 != uno.end()) {
        it1 = uno.erase(it1);
    }
    
}