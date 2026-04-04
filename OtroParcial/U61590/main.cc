
#include <iostream>
#include <list>
using namespace std;

list<string>::const_iterator paraula_mes_llarga(const list<string>& text);

int main() {
    string word;
    list<string> text;
    while (cin >> word) {
        text.push_back(word);
    }
    auto i = paraula_mes_llarga(text);
    cout << (i != text.end() ? *i : "<text buit>") << endl;
    return 0;
}
