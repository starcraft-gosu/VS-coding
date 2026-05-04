#include <iostream>
#include <fstream>
using namespace std;

int main() {
	/*ifstream input;
	input.open("input.txt");
	ofstream output;
	output.open("output.txt");*/

	int a = 0, b = 0;
	cin >> a >> b;
	//if (!input.is_open()) {
	//	cout << "cannot open the file" << endl;
	//	return 1;
	//}
	//
	//input >> a >> b;
	cout << (a*b);
	
	/*input.close();
	output.close();*/

	return 0;
}