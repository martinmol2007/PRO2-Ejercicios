#if __has_include("program.hh")
#include "program.hh"
#elif __has_include("deque.hh")
#include "deque.hh"
#endif

int main() {
	string option = "";
	int value = 0;

	Deque<int> d;
	while (cin >> option and option != "end") {
		if (option == "push_back") {
			cin >> value;
			d.push_back(value);
		} else if (option == "push_front") {
			cin >> value;
			d.push_front(value);
		} else if (option == "pop_back") {
			d.pop_back();
		} else if (option == "pop_front") {
			d.pop_front();
		} else if (option == "size") {
			cout << d.size() << endl;
		} else if (option == "front") {
			cout << d.front() << endl;
		} else if (option == "back") {
			cout << d.back() << endl;
		} else if (option == "write_deque") {
			cout << d << endl;
		}
	}
}
