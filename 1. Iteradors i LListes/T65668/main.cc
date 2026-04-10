#include <iostream>
#include <list>
using namespace std;

void inserta_don(list<string>& texto);

list<string> llegeix_text() {
    list<string> text;
    string word;
    while (cin >> word) {
        text.push_back(word);
    }
    return text;
}

void mostra_text(const list<string>& text) {
    auto it = text.begin();
    if (it == text.end()) {
        cout << "<text buit>" << endl;
        return;
    }
    cout << *it;
    for (it++; it != text.end(); it++) {
        cout << " " << *it;
    }
    cout << endl;
}

int main() {
    list<string> text = llegeix_text();

    // Cridem la funció d'interès
    inserta_don(text);

    mostra_text(text);
    return 0;
}
