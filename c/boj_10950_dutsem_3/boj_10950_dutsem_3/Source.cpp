#include <iostream>

int main()
{
	int t;
	std::cin >> t;

	int cnt = 0;
	while (cnt < t) {
		int a, b;
		std::cin >> a >> b;
		std::cout << a + b << std::endl;
		cnt++;
	}
	return 0;
}