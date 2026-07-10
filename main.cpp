#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct command
{
	string ins;
	string op;
};


int mem[0xff];
vector<command> v;


int main() {

	while (true) {
		cout << "> ";

		string ins, op;
		cin >> ins >> op;

		if (ins == "RUN") {
			for (int i = 0; i < v.size(); i++) {
				if (v[i].ins == "PRINT") {
					cout << v[i].op << endl;
				}

				else if (v[i].ins == "INPUT") {
					int x;
					cin >> x;

					mem[stoi(v[i].op)] = x;
				}

				else if (v[i].ins == "GET") {
					cout << mem[stoi(v[i].op)] << endl;
				}
				else if (v[i].ins == "STORE") {
					int x;
					cin >> x;

					mem[stoi(v[i].op)] = x;
				}
				else if (v[i].ins == "EXIT") {
					return stoi(v[i].op);
				}

				else if (v[i].ins == "NEW") {
					v.clear();

					for (int i = 0; i < 0xff; i++) {
						mem[i] = 0;
					}
				}
			}

			return 0;
		}

		v.push_back({ins, op});
	}




	return 0;
}