#include <iostream>
using namespace std;

int main() {
	long num1, num2;
	long result;

	cin >> num1 >> num2;
	result = num1 - num2;
	if (result < 0) {
		cout << result * -1;
	}
	else {
		cout << result;
	}
	return 0;
}