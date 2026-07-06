#include <iostream>
#include <sstream>
using namespace std;





int main() {

	while (true) {
		cout << "> ";

		string ins;
		cin >> ins;


		for (int i = 0; i < ins.size(); i++) {
			ins[i] = toupper(ins[i]);
		}

		stringstream ss(ins);

		string word;


		while (ss >> word) {
			if (word == "PRINT") {
				ss >> word;

				cout << word << endl;
			}
		}
	}




	return 0;
}