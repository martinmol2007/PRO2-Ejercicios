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

int read_int(string s) {
    istringstream iss(s);
    int value;
    iss >> value;
    return value;
}

bool parse_list(List<int>& L) {
    L.clear();
    char first;
    cin >> first;
    if (cin.eof()) return false;
    assert(first == '{');
    string line;
    getline(cin, line);
    if (cin.eof()) return false;
    int i = 0;
    string elem = "";
    while (i < line.size() && line[i] != '}') {
        if (line[i] == ',') { L.push_back(read_int(elem)); elem = ""; }
        else elem += line[i];
        i++;
    }
    assert(!elem.empty());
    L.push_back(read_int(elem));
    return true;
}

void show_list(List<int>& L) {
    cout << "{";
    auto it = L.begin();
    if (it != L.end()) {
        cout << *it;
        for (it++; it != L.end(); it++) cout << ", " << *it;
    }
    cout << "}" << endl;
}

int main() {
    List<int> L;
    while (parse_list(L)) {
        L.remove_even_positions();
        show_list(L);
        cout << endl;
    }
}
