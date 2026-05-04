#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

int main() {
	ifstream input("Text.txt");
	ofstream output("output.txt");
	if (!input.is_open()) {
		cerr << "invalid input file";
		return -1;
	}

	int t{}, i{}; // t=0 initialization
	input >> t;
	int a, b;
	while ( i < t) {
		input >> a >> b;
		output << "Case #" << (i + 1) << ": " << a << " + " << b << " = " << (a + b) << '\n';
		i++;
	}

	input.close(); output.close();
	ShellExecuteA(NULL, "open", "output.txt", NULL, NULL, SW_SHOWNORMAL);
	return 0;
}