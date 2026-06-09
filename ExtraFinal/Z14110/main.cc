#include <iostream>
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
    Queue<int> c;
    while (Queue<int>::parse(cin, c)) {
        cin >> x;
        Queue<int> q;
        c.split(x, q);
        
        c.print(cout);
        q.print(cout);
        cout << endl;
    }
}
