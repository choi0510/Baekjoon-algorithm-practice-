#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int sum = 0;
	int max_sum = 0;
	int n1, n2, n3, n4;
	int order = 0;

	vector<pair<int, int>> v;

	for (int i = 0; i < 5; i++) {
		sum = 0;
		cin >> n1 >> n2 >> n3 >> n4;
		sum += (n1 + n2 + n3 + n4);
		v.push_back({ sum, i });
		max_sum = max(max_sum, sum);
	}

	for (int i = 0; i < v.size(); i++) {
		if (max_sum == v[i].first) {
			order = i + 1;
			break;
		}
	}

	cout << order << ' ' << max_sum;
}