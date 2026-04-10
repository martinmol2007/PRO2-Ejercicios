#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 100001;
// First: Valor | Second: Frecuencia
typedef pair<int, int> Frec;

bool cmp (const Frec& a, const Frec& b) {
    if (a.second != b.second) return a.second > b.second;
    return a.first < b.first;
}

int main () {
    int n, k;
    while (cin >> n >> k) {
        vector<int> v (MAX, 0);
        // Leemos los n numero y calculamos su frecuencia
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v[x]++;
        }

        // Calcular el vector de Frecuencias
        vector<Frec> res;
        for (int i = 1; i < MAX; i++) {
            if (v[i] > 0) res.push_back({i, v[i]});
        }

        sort(res.begin(), res.end(), cmp);

        for (int i = 0; i < k; i++) {
            cout << res[i].first << endl;
        }
        cout << "---" << endl;
    }

    return 0;
}