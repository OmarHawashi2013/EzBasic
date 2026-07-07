#include <iostream>
#include <string>
using namespace std;


int mem[0xff];


int main() {

	while (true) {
		cout << "> ";

		string ins, op;
		cin >> ins >> op;


		if (ins == "PRINT") {
			cout << op;
		}

		else if (ins == "INPUT") {
			int x;
			cin >> x;

			mem[stoi(op)] = x;
		}

		else if (ins == "GET") {
			cout << mem[stoi(op)] << endl;
		}
	}




	return 0;
}