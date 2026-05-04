#include <iostream>
#include <string>
using namespace std;

int main() {
	string sub, grade;
	float total = 0.0, ans = 0.0;
	float num = 0.0;
	for (int i = 0; i < 20; i++) {
		cin >> sub >> num >> grade;
		if (grade == "A+") {
			ans += 4.5*num;
		}
		else if (grade == "A0") {
			ans += 4.0 * num;
		}
		else if (grade == "B+") {
			ans += 3.5 * num;
		}
		else if (grade == "B0") {
			ans += 3.0 * num;
		}
		else if (grade == "C+") {
			ans += 2.5 * num;
		}
		else if (grade == "C0") {
			ans += 2.0 * num;
		}
		else if (grade == "D+") {
			ans += 1.5 * num;
		}
		else if (grade == "D0") {
			ans += 1.0 * num;
		}
		else if (grade == "F") {
			ans += 0.0 * num;
		}
		else{
			continue;
		}
		total += num;
	}

	ans /= total;
	cout << ans;
	return 0;
}