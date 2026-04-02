#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;



int main() {
    string command;

    list<int> v;

    while (cin >> command) {

        if (command == "v.push_back(") {
            int val;
            cin >> val;
            string ending;
            cin >> ending; // Això consumeix el ");"
            
            auto it = v.end();
            v.insert(it, val);

        } else if (command == "v.push_front(") {
            int val;
            cin >> val;
            string ending;
            cin >> ending; // Això consumeix el ");"

            auto it = v.begin();
            v.insert(it, val);
        
        } else if (command == "v.pop_front();") {
            if (v.size() >= 1) {
                auto it = v.begin();
                v.erase(it);
            }

        } else if (command == "v.pop_back();") {
            if (v.size() >= 1) {
                auto it = v.end();
                it--;
                v.erase(it);
            }

        } else if (command == "v.resize(") {
            int newsize;
            cin >> newsize;
            string ending;
            cin >> ending; // Això consumeix el ");"
            
            if (newsize > v.size()) {
                int diff = newsize - v.size();
                while (diff > 0) {
                    v.push_back(0);
                    diff--;
                }
            } else {
                int diff = v.size() - newsize;
                while (diff > 0) {
                    v.pop_back();
                    diff--;
                }
            }
            
        } else if (command == "cout<<v[") {
            int index;
            cin >> index;
            string ending;
            cin >> ending; // Això consumeix el "];"
            
            auto it = v.begin();
            advance(it, index);

            cout << *it << endl;

        } else if (command == "cout<<v;") {
            
            for (auto it = v.begin(); it != v.end(); it++) {
                if (it != v.begin()) cout << ",";
                cout << *it;
            }
            cout << endl;

        } else if (command == "v[") {
            int index;
            cin >> index;
            string mid;
            cin >> mid; // Això consumeix el "]="
            int val;
            cin >> val;
            string ending;
            cin >> ending; // Això consumeix el ";"
            

            auto it = v.begin();
            advance(it, index);
            *it = val;

        } else if (command == "//") {
            string comment;
            getline(cin, comment);
            cout << "//" << comment << endl;
        } else {
            cout << "Wrong command '" << command << "'" << endl;
            string discard;
            getline(cin, discard);
        }
    }
    return 0;
}