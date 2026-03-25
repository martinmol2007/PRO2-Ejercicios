#include <iostream>
#include <queue>
using namespace std;

/**
* @pre  cert
* @post la cua de sortida és com la d'entrada, però havent
*       eliminat les repeticions successives d'elements.
*/
queue<string> remove_repeats(queue<string>& entrada);

queue<string> read_queue() {
	queue<string> q;
	string job;
	while (cin >> job) {
		q.push(job);
	}
	return q;
}

void show_queue(queue<string>& q) {
	while (not q.empty()) {
		cout << "<job>" << q.front() << "</job>" << endl;
		q.pop();
	}
}

int main() {
	auto qin = read_queue();
	auto qout = remove_repeats(qin);
	show_queue(qout);
	return 0;
}
