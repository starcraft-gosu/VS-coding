#include <iostream>
#include <string>
using namespace std;

int main() {
	//3~12
	int ans = 0;
	string s;
	getline(cin, s);

	for (int i=0; i<s.size(); i++) {
		char a = s[i];
		if (a == 'A' || a == 'B' || a == 'C') {
			ans += 3;
		}
		else if (a == 'D' || a == 'E' || a == 'F') {
			ans += 4;
		}
		else if (a == 'G' || a == 'H' || a == 'I') {
			ans += 5;
		}
		else if (a == 'J' || a == 'K' || a == 'L') {
			ans += 6;
		}
		else if (a == 'M' || a == 'N' || a == 'O') {
			ans += 7;
		}
		else if (a == 'P' || a == 'Q' || a == 'R' || a == 'S') {
			ans += 8;
		}
		else if (a == 'T' || a == 'U' || a == 'V') {
			ans += 9;
		}
		else if (a == 'W' || a == 'X' || a == 'Y' || a == 'Z') {
			ans += 10;
		}
		else {
			cout << "invalid input";
			return -1;
		}
	}
	cout << ans;
	return 0;
}