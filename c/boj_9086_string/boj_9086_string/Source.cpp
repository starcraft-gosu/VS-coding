#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	ifstream input("input.txt");
	ofstream output("output.txt");
	if (!input.is_open()) {
		cout << "invalid input file";
		return -1;
	}
	int t;
	input >> t;
	string s;

	for (int i = 0; i < t; i++) {
		input >> s;
		output << s[0] << s[s.size() - 1] << endl;
	}

	return 0;
}