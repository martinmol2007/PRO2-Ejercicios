#include <iostream>
#include <map>
#include <string>

using namespace std;

int main () {
    string fruta;
    int num;

    map<string, int> mapa;

    while (cin >> fruta >> num) {
        mapa[fruta] += num;
    }

    for (auto it = mapa.begin(); it != mapa.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}