#include <iostream>
using namespace std;

long long newCal(long long num1, long long num2)
{
	long long result = (num1 + num2) * (num1 - num2);
	return result;
}

int main() {
	long long num1, num2;
	cin >> num1 >> num2;
	long long result = newCal(num1, num2);
	cout << result;

	return 0;
}