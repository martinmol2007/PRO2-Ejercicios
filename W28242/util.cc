#include "util.hh"
#include <iostream>
#include <sstream>
#include <cassert>
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
    if (iss.fail()) {
        std::cerr << "---> '" << s << "'" << endl;
    }
    assert(!iss.fail());
    return x;
}
