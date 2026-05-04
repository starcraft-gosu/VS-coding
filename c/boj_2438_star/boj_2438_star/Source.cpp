#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int t{}, i = 1; // value-0 initialization
	cin >> t;
	while (i <= t) {
		for (int j = 0; j < i; j++) {
			cout << '*';
		}
		cout << '\n';
		i++;
	}
	return 0;
}