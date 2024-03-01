#include <iostream>
using namespace std;

long long arr[10000003];
long long A, B;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int count = 0;

	for (int i = 2; i <= 10000000; i++) {
		arr[i] = i;
	}

	for (long long i = 2; i * i <= 10000000; i++) {
		if (arr[i] == 0) {
			continue;
		}
		for (long long j = i * 2; j <= 10000000; j += i) {
			arr[j] = 0;
		}
	}

	cin >> A >> B;

	for (long long i = 2; i * i <= B; i++) {
		if (arr[i] != 0 && arr[i] * arr[i] <= B) {
			long long num = arr[i];
			while (arr[i] <= B / num) { // long long 범위 초과 방지
				if (arr[i] * num >= A) {
					count++;
				}
				num *= arr[i];
			}
		}
	}

	cout << count;
}