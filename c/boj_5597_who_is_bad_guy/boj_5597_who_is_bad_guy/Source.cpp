#include <iostream>
#include <vector>
using namespace std;

int main() {
	int* students = new int[31]{}; // value-0 initialization
	int n = 0;

	while (cin >> n) {
		students[n] = 1;
	}

	for (int i = 1; i <= 30; i++) {
		if (students[i] != 1) {
			cout << i << endl;
		}
	}
	delete[] students;

	/*vector<int> students(31,0);
	int n;
	while (cin >> n) {
		students[n] = 1;
	}
	for (int i = 1; i <= 30; i++) {
		if (students[i] != 1) {
			cout << i << endl;
		}
	}*/
	return 0;
}