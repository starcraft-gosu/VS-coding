#include <iostream>
#include <string>
using namespace std;

int main() {
	//if c, if d, if l, if n, if s, if z
	string s;
	int num = 0;
	cin >> s;

	for (int i = s.size()-1; i >0 ; i--) {
		if (s[i] == '=') {
			if (s[i - 1] == 'c' || s[i - 1] == 's') {
				num += 1;
			}
			else if (s[i - 1] == 'z') {
				if ((i - 2) >= 0 && s[i - 2] == 'd') {
					num += 2;
				}
				else {
					num += 1;
				}
			}
		}else if (s[i] == '-') {
			if (s[i -1] == 'c' || s[i-1] == 'd') {
				num += 1;
			}
		}
		else if (s[i] == 'j') {
			if (s[i - 1] == 'l' || s[i - 1] == 'n') {
				num += 1;
			}
		}
		else {
			continue;
		}

	}
	cout << (s.size() - num);
	return 0;
}