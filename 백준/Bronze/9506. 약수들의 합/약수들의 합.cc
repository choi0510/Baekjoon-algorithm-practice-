#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n = 0;
	int sum = 0;
	int count = 0;
	vector<int> v;

	while (n != -1) {
		cin >> n;

		v.clear();
		sum = 0;
		count = 0;

		if (n == -1) {
			break;
		}

		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				v.push_back(i);
				sum += i;
				count++;
			}
		}

		if (sum == n) {
			printf("%d = ", n);
			for (int i = 0; i < count; i++) {
				if (i == count - 1) {
					printf("%d\n", v[i]);
				}
				else {
					printf("%d + ", v[i]);
				}
			}
		}
		else {
			printf("%d is NOT perfect.\n", n);
		}
	}
}