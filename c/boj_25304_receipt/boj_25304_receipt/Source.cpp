#include <iostream>
// #include <string>
int main() {
	int x, n;
	std::cin >> x >> n;
	int total = 0;
	for (int i = 0; i < n; i++) {
		int a, b;
		std::cin >> a >> b;
		total += a * b;
	}
	
	std::string ans = (total == x) ? "Yes" : "No";
	std::cout << ans << std::endl;
	return 0;
}