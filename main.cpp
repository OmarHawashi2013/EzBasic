#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

struct command
{
	string ins;
	string op;
};


int mem[0xff];
vector<command> v;


int main(int argc, char *argv[]) {

	ifstream file(argv[1]);

	string word;

	while (file >> word) {
		command c;
		c.ins = word;

		file >> word;

		c.op = word;

		v.push_back(c);

	}

	
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


	file.close();




	return 0;
}