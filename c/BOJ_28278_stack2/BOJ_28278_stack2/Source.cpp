#include <iostream>
#include <vector>
using namespace std;

void Cmd(int, vector <int>&);

int main() {
	int  n = 0;
	cin >> n;
	vector <int> stack;
	int x;
	

	for (int i = 0; i < n; i++) {
		cin >> x;
		Cmd(x, stack);


	}
	return 0;
}

void Cmd(int x, vector <int> stack) {
	cin >> x;
	if (x == 1) {
		stack.push_back(x);
	}
	else if (x == 2) {
		cout << stack[stack.size() - 1];
		stack.pop_back();
	}
	else if (x == 3) {
		cout << stack.size();
	}
	else if (x == 4) {
		if (stack.size() == 0) {
			cout << 1;
		}
		else {
			cout << 0;
		}
	}
	else {
		if (stack.size()) { // must check the data type
			cout << stack[stack.size() - 1];
		}
		else {

		}
	}
	return;
}