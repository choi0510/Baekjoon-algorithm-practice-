#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	int num;
	int max = 10013;
	vector<int> v(max+1, 0);
	vector<pair<int, int>> v1;
	

	for (int i = 2; i < max+1; i++) {
		v[i] = i;
	}

	for (int i = 2; i * i <= max + 1; i++) {
		if (v[i] == 0) {
			continue;
		}
		for (int j = i * 2; j < max + 1; j += i) {
			if (v[j] == 0) {
				continue;
			}
			else {
				v[j] = 0;
			}
		}
	}

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		for (int j = 2; j <= num/2; j++) {
			int min_diff = 0;
			if (v[j] + v[num - j] == num) {
				v1.push_back({ v[j], v[num - j] });
			}
		}
		cout << v1[v1.size() - 1].first << ' ' << v1[v1.size() - 1].second << '\n';
		v1.clear();
	}
}