#include <iostream>
#include <sstream>
#include <cassert>
using namespace std;

#if __has_include("program.hh")
#include "program.hh"
#else
#if __has_include("list.hh")
#include "list.hh"
#endif
#endif

/**
 * @brief Reads an integer from a string.
 */
int read_int(string s) {
    istringstream iss(s);
    int value;
    iss >> value;
    // FIXME: There could be some chars still in `iss`
    return value;
}

/**
 * @brief Read a list in the format '{e1, e2, e3, ..., eN}'
 * The list occupies one whole line.
 */
bool parse_queue(List<int>& L) {
    L.clear();

    char first;
    cin >> first; // this will skip all spaces!
    if (cin.eof()) {
        return false;
    }
    assert(first == '{');

    string line;
    getline(cin, line);
    if (cin.eof()) {
        return false;
    }

    // Until last '}'
    int i = 0;
    string elem = "";
    while (i < line.size() && line[i] != '}') {
        if (line[i] == ',') {
            int value = read_int(elem);
            L.push_back(value);
            elem = "";
        } else {
            elem += line[i];
        }
        i++;
    }
    assert(!elem.empty());

    int value = read_int(elem);
    L.push_back(value);

    return true;
}

/**
 * @brief Shows a list in the format '{e1, e2, ..., eN}'
 */
void show_list(List<int>& L) {
    cout << "{";
    auto it = L.begin();
    if (it != L.end()) {
        cout << *it;
        for (it++; it != L.end(); it++) {
            cout << ", " << *it;
        }
    }
    cout << "}" << endl;
}

int main() {
    List<int> L;
    while (parse_queue(L)) {
        int x;
        cin >> x;
        L.erase_all(x);
        show_list(L);
    }
}
