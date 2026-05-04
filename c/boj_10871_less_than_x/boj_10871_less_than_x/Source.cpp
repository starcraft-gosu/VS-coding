#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, x;
	cin >> n >> x;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] < x) {
			cout << arr[i] << ' ';
		}
	}
	delete[] arr;
	return 0;
}



// Vector ver.

//int main() {
//	//int n, x;
//	//cin >> n >> x;
//	//int a = 0;
//
//	//vector<int> arr;
//	//for (int i = 0; i < n; i++) {
//	//	cin >> a;
//	//	if (a < x) {
//	//		arr.push_back(a);
//	//	}
//	//}
//	//for (int num : arr) {
//	//	cout << num << ' ';
//	//}
//	//return 0;
//}