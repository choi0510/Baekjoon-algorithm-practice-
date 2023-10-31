#include <iostream>
#include <cmath>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	string N;
	int B;
	int sum = 0;

	cin >> N >> B;

	int len = N.length();
	int index = len - 1;

	for (int i = 0; i < len; i++) {
		if (N[i] >= 'A' && N[i] <= 'Z') {
			int n = N[i] - 'A' + 10;
			sum += n * pow(B, index);
		}
		else {
			int n = N[i] - '0';
			sum += n * pow(B, index);
		}
		
		index--;
	}
	cout << sum;
}