#include <set>

using namespace std;

/**
 * @brief Determina si els conjunts de nombres d'A i B
 * tots junts formen una seqüència de nombres consecutius
 * sense forats ni repetits.
 * 
 * @param A Conjunt de nombres
 * @param B Conjunt de nombres
 * 
 * @result bool `true` si els nombres a A i B són consecutius 
 * i `false` altrament.
 */
bool numeros_consecutius(const set<int>& A, const set<int>& B) {
    auto ait = A.begin(), bit = B.begin();
    int next = min(*ait, *bit);
    while (ait != A.end() && bit != B.end()) {
        if (*ait == next) {
            next = *ait + 1;
            ait++;
        } else if (*bit == next) {
            next = *bit + 1;
            bit++;
        } else {
            return false;
        }
    }
    while (ait != A.end()) {
        if (*ait != next) {
            return false;
        }
        next = *ait + 1;
        ait++;
    }
        
    while (bit != B.end()) {
        if (*bit != next) {
            return false;
        }
        next = *bit + 1;
        bit++;
    }

    return true;
}