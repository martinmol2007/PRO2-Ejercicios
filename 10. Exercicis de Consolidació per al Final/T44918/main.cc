#include <cassert>
#include <iostream>
#include <sstream>
using namespace std;

#if __has_include("program.hh")
#include "program.hh"
#else
#if __has_include("queue.hh")
#include "queue.hh"
#endif
#endif

int main() {
    int x;
    Queue<int> q;
    while (Queue<int>::parse(cin, q)) {
        cin >> x;
        q.erase_all(x);
        q.print(cout);
        cout << endl;
    }
}
