#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main() {
	ifstream input;
	input.open("input.txt");

	if (!input.is_open()) {
		cout << "cannot open the file";
		return 1;
	}

	ofstream output;
	output.open("output.txt");

	int a = 0, b = 0, c = 0;
	input >> a >> b >> c;

	output << a << b << c << "\n";
	output << ((a + b) % c) << "\n" << (((a % c) + (b % c))%c) << "\n" << ((a * b) % c) << "\n" << (((a % c) * (b % c)) % c) << "\n";
	
	input.close();
	output.close();

	ShellExecuteA(
		NULL,
		"open",
		"output.txt",
		NULL,
		NULL,
		SW_SHOWNORMAL
	);

	return 0;
}