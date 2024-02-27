#include <iostream>
using namespace std;

long long S;
long long sum;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	long long count = 0;

	cin >> S;

	for (long long i = 1; sum <= S; i++) {
		sum += i;
		count++;
	}

	cout << count - 1;
}