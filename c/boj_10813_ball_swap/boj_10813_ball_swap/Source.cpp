#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int* baguni = new int[n+1];
	for (int i = 1; i <= n; i++) {
		*(baguni + i) = i;
		//baguni[i] = i;
	}

	int s1 = 0, s2 = 0;
	int tmp = 0;
	while (cin >> s1 >> s2) {
		tmp = baguni[s1];
		baguni[s1] = baguni[s2];
		baguni[s2] = tmp;
	}
	for (int i = 1; i <= n; i++) {
		cout << baguni[i] << ' ';
	}
	delete[] baguni;

	return 0;

	//int n, m;
	//int s1 = 0, s2 = 0;
	//int tmp = 0;
	//cin >> n >> m;

	//vector <int> baguni(n+1);
	//for (int i = 1; i <= n; i++) {
	//	baguni[i] = i;
	//}
	//while (cin >> s1 >> s2) {
	//	;
	//	tmp = baguni[s1];
	//	baguni[s1] = baguni[s2];
	//	baguni[s2] = tmp;
	//	//for (int j = 1; j <= n; j++) {
	//	//	cout << baguni[j] << ' ';
	//	//}
	//}
	//for (int j = 1; j <= n; j++) {
	//	cout << baguni[j] << ' ';
	//}
	//return 0;
}