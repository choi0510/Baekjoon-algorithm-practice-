#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int num;
	vector<int> v;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}

	// using bubble sort 버블 정렬 사용하기
	for (int i = N-1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (v[j] > v[j + 1]) {
				swap(v[j], v[j + 1]);
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << v[i] << '\n';
	}
}