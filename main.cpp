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
			cout << op << endl;
		}

		else if (ins == "INPUT") {
			int x;
			cin >> x;

			mem[stoi(op)] = x;
		}

		else if (ins == "GET") {
			cout << mem[stoi(op)] << endl;
		}
		else if (ins == "STORE") {
			int v;
			cin >> v;


			mem[stoi(op)] = v;
		}
	}




	return 0;
}