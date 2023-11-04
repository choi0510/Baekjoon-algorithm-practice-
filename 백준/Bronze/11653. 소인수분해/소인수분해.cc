#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int mul = 1;
	int count = 0;
	int count2 = 0;
	vector<int> v;
	vector<int> v2;

	cin >> N;

	int C = N;
	
	for (int i = 2; i <= N; i++) {
		if (N == 1) {
			return 0;
		}
		if (N % i == 0) {
			v.push_back(i);
			count++;
		}
	}

	for (int i = 0; i < count; i++) {
		while (N % v[i] == 0) {
			N /= v[i];
			v2.push_back(v[i]);
			count2++;
			mul *= v[i];
			if (mul == C) {
				break;
			}
		}
	}

	for (int i = 0; i < count2; i++) {
		cout << v2[i] << '\n';
	}

}