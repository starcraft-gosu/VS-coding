#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	vector <int> alpha(26, -1);

	for (int i = 0; i < s.size(); i++) {
		int a = s[i];
		if (alpha[a - 97] == -1) {
			alpha[a - 97] = i; // 'a' == 97
		}
	}
	for (int j = 0; j < 26; j++) {
		cout << alpha[j] << ' ';
	}
	return 0;
}