#include <iostream>
using namespace std;

int newCal(int num1, int num2)
{
	int result = (num1 + num2) * (num1 - num2);
	return result;
}

int main() {
	int num1, num2;
	cin >> num1 >> num2;
	int result = newCal(num1, num2);
	cout << result;

	return 0;
}