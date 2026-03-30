#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main () {
    string op;

    map<string, int> cuentas;
    set<string> rojos;

    while (cin >> op) {
        if (op == "TRANSACTION") {
            string cliente;
            int num;
            cin >> cliente >> num;

            auto it = cuentas.find(cliente);

            if (it == cuentas.end()) {
                cuentas.insert({cliente, num});
                if (num < 0) rojos.insert(cliente);
            } else {
                it->second += num;
                if (it->second < 0) rojos.insert(cliente);
                else rojos.erase(cliente);
            }
        }
        else if (op == "NUMBERINRED") {
            cout << rojos.size() << endl;
        }
        else if (op == "PEOPLEINRED") {
            int n = rojos.size();
            int i = 0;
            for (auto it = rojos.begin(); it != rojos.end(); it++) {
                cout << *it;
                if (i < n-1) cout << " ";
                i++;
            }
            cout << endl;
        }
    }
    return 0;
}