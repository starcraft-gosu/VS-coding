#include <iostream>

using namespace std;
int main()
{
	// if both are int, divide output is also int
 	long double a, b, ans;
	cin >> a >> b;
	ans = a / b;

	cout << fixed; //fix sosu dot
	cout.precision(9);
	cout << ans << endl;
	return 0;
}
