#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	ifstream input("input.txt");
	ofstream output("output.txt");
	if (!input.is_open()) {
		cout << "invalid file";
		return -1;
	}

	int a, b;
	input >> a >> b;

	int p, m, mul, dev, rem;
	p = a + b;
	m = a - b;
	mul = a * b;
	dev = a / b;
	rem = a % b;

	output << p << '\n' << m << '\n' << mul << '\n' << dev << '\n' << rem;
	input.close();
	output.close();
	ShellExecuteA(NULL, "open", "output.txt", NULL, NULL, SW_SHOWNORMAL);
	return 0;
}