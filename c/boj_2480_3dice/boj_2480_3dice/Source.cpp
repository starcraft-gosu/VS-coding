#include <iostream>

int main()
{
	int a, b, c;
	int prize;
	std::cin >> a >> b >> c;
	if (a == b && b == c) {
		prize = 10000 + a * 1000;
	}
	else if(a == b){
		prize = 1000 + a * 100;
	}
	else if (c == b) {
		prize = 1000 + b * 100;
	}
	else if (a == c) {
		prize = 1000 + a * 100;
	}
	else {
		int a_b = (a > b) ? a : b;
		int max = (a_b > c) ? a_b : c;
		prize = max * 100;
	}
	std::cout << prize << std::endl;
	return 0;
}