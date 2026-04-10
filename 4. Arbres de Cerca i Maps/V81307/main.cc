#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main () {
    map<string, string> mapa;

    string line;
    getline(cin, line);

    while (line != "") {
        istringstream sin(line);
        string A, B;
        sin >> A >> B;
        mapa.insert({A, B});
        getline(cin, line);
    }

    string palabra;
    while (cin >> palabra) {
        map<string, string>::iterator it;
        it = mapa.find(palabra);
        if (it == mapa.end()) cout << "<not found>" << endl;
        else cout << it->second << endl;
    }
    return 0;
}