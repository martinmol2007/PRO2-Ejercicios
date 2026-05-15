#include <iostream>
#include <utility>
using namespace std;

pair<int,int> divmod(int a, int b) {
   pair<int, int> par;
   par.first = a/b;
   par.second = a%b;
   return par;
}

int main() {
   int a, b;
   cin >> a >> b;
   pair<int, int> p = divmod(a, b);
   cout << p.first << ' ' << p.second << endl;
}