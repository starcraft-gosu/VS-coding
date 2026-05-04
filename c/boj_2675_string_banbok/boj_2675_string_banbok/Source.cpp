#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
using namespace std;

int main() {
	ifstream input("input.txt");
	ofstream output("output.txt");

	if (!input) {
		cout << "cannot find the input files!";
		return -1;
	}

	int t = 0, i = 0;
	input >> t;
	
	while (i < t) {
		int r = 0;
		string s;
		input >> r >> s;
		
		for (int j = 0; j < s.length(); j++) {
			for (int k = 0; k < r; k++) {
				output << s[j];
			}
		}
		i++;
		output << "\n";
	}
	input.close();
	output.close();
	ShellExecuteA(NULL, "open", "output.txt", NULL, NULL, SW_SHOWNORMAL);

	return 0;
}