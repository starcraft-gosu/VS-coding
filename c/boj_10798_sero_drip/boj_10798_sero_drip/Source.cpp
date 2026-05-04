#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	char arr[5][16] = { '\0' };
	char c;
	int i = 0, j = 0;
	for (i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	for (int k = 0; k < 15; k++) {
		for (int l = 0; l < 5; l++) {
			if (arr[l][k] != '\0') {
				cout << arr[l][k];
			}
		}
	}
	return 0;
}