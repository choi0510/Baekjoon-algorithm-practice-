#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <vector>
using namespace std;

bool BS(vector<int>& v, int len, int target) {
	int low = 0;
	int high = len - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (v[mid] == target) {
			return true;
		}
		else if (v[mid] < target) {
			low = mid + 1;
		}
		else if (v[mid] > target) {
			high = mid - 1;
		}
	}
	return false;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	int num;
	unordered_set<int> s;
	vector<int> v;

	cin >> N;

	// undordered_set을 이용한 풀이
	/*for (int i = 0; i < N; i++) {
		cin >> num;
		s.insert(num);
	}

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> num;
		if (s.find(num) != s.end()) {
			cout << 1 << '\n';
		}
		else {
			cout << 0 << '\n';
		}
	}*/

	// binary search를 이용한 풀이
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> num;
		if (BS(v, v.size(), num)) {
			cout << 1 << '\n';
		}
		else {
			cout << 0 << '\n';
		}
	}
}