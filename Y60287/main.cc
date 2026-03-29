#include "html_elem.hh"
#include "vstack.hh"
#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main () {
    string s;

    bool es_html = false;
    bool es_head = false;

    vector<string> v;
    stack<string> pila;
    while (cin >> s) {
        if (is_tag(s) && not is_close_tag(s)) {
            v.push_back(s);
            pila.push(s);

            if (tag_name(s) == "html") {
                es_html = true;
            } else if (tag_name(s) == "head") {
                es_head = true;
            }
        }
        else if (is_tag(s) && is_close_tag(s)) {
            if (tag_name(pila.top()) == "html" && tag_name(s) == "html") {
                v.push_back(s);
                pila.pop();
                es_html = false;
            } else if (tag_name(pila.top()) == "head" && tag_name(s) == "head") {
                v.push_back(s);
                pila.pop();
                es_head = false;
            } else if (tag_name(pila.top()) == tag_name(s)) {
                v.push_back(s);
                pila.pop();
            }
        }
        else if (not is_tag(s)) {
            if (not pila.empty()) {
                if (tag_name(pila.top()) == "script" && es_head && es_html) {
                    v.push_back(s);
                } else if (tag_name(pila.top()) != "script") {
                    v.push_back(s);
                }
            } else {
                v.push_back(s);
            }
        }
    }
}