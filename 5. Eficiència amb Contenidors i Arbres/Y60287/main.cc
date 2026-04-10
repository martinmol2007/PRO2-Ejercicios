#include "html_elem.hh"
#include "vstack.hh"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    vector<string> v;
    VStack pila;

    while (cin >> s) {
        if (is_tag(s)) {
            if (!is_close_tag(s)) {

                if (tag_name(s) == "script") {
                    v.push_back(s);  // guardar <script>

                    bool keep = false;

                    // script hijo directo de head, y head hijo directo de html
                    if (!pila.empty() && pila.top(0) == "<head>" && pila.size() >= 2 && pila.top(-1) == "<html>") {
                        keep = true;
                    }

                    while (cin >> s && s != "</script>") {
                        if (keep) v.push_back(s);
                    }

                    v.push_back("</script>");
                }
                else {
                    v.push_back(s);
                    pila.push(s);
                }
            }
            else {
                v.push_back(s);
                pila.pop();
            }
        }
        else {
            v.push_back(s);
        }
    }

    for (int i = 0; i < int(v.size()); ++i) {
        cout << v[i] << " ";
    }

    return 0;
}