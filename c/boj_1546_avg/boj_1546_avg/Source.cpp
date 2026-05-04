#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n = 0, max = 0;
	cin >> n;
	vector<int> grades(n); // size=n, value=0

	int grade=0;
	for (int i = 0; i < n; i++) {
		cin >> grade;
		if (max < grade) {
			max = grade;
		}
		grades[i] = grade;
	}

	int total = 0;
	for (int i = 0; i < n; i++) {
		total += grades[i];
	}
	float avg = (float)total * 100 / n / max;
	cout << avg;
	return 0;
}