#if __has_include("program.hh")
#include "program.hh"
#elif __has_include("stack.hh")
#include "stack.hh"
#endif

#include <iostream>
using namespace std;

void read_stack(Stack<int>& p) {
	string s;
	while (cin >> s and s != "#") {
		p.push(stoi(s));
	}
}

int main() {
	int i;
	Stack<int> p;
	while (cin >> i) {
		read_stack(p);
		p.eliminar(i);
		p.print();
		p = Stack<int>();
	}
}
