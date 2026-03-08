#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

string join(vector<string>::iterator ini, vector<string>::iterator fin, string sep);

vector<string> llegeix_paraules(const string& line) {
    istringstream S(line);
    vector<string> words;
    string word;
    while (S >> word) {
        words.push_back(word);
    }
    return words;
}

int main() {
    string line;
    getline(cin, line);
    const string separador = line.substr(1, line.size() - 2);

    getline(cin, line);
    vector<string> paraules = llegeix_paraules(line);

    string resultat = join(paraules.begin(), paraules.end(), separador);
    cout << '"' << resultat << '"' << endl;

    return 0;
}
