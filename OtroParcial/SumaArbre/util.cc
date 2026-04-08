#include "util.hh"
#include <sstream>
#include "assert.hh"
using namespace std;

bool is_number(string s) {
    if (s.empty()) {
        return false;
    }
    for (char c : s) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

int string_to_int(string s) {
    istringstream iss(s);
    int x = 0;
    iss >> x;
    assert(!iss.fail(), "string_to_int: conversió fallida");
    return x;
}
