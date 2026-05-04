#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	ifstream input("text.txt");
	ofstream output("output.txt");

	if (!input.is_open()) {
		cout << "cannot open the files";
		return -1;
	}
	int x, y, out;
	input >> x >> y;

	if (x > 0 && y > 0) {
		out = 1;
	}else if (x < 0 && y > 0) {
		out = 2;
	}else if (x < 0 && y < 0) {
		out = 3;
	}
	else {
		out = 4;
	}
	output << out;

	input.close();
	output.close();
	ShellExecuteA(NULL, "open", "output.txt", NULL, NULL, SW_SHOWNORMAL);

	return 0;
}