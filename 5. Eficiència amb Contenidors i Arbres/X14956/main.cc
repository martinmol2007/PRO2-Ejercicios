#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const pair<int,int>& a, const pair<int,int>& b) {
    // a.first = numero, a.second = frecuencia
    if (a.second != b.second) return a.second > b.second; // mayor frecuencia primero
    return a.first < b.first; // si empatan, menor numero primero
}

int main() {
    int n, k;
    while (cin >> n >> k) {
        map<int,int> freq;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            ++freq[x];
        }

        vector<pair<int,int>> v;

        auto it = freq.begin();
        while (it != freq.end()) {
            v.push_back(*it);
            ++it;
        }

        sort(v.begin(), v.end(), cmp);

        int i = 0;
        while (i < k) {
            cout << v[i].first << endl;
            ++i;
        }

        cout << "---" << endl;
    }
}