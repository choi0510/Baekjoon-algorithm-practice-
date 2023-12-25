#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	string a, b;
	int N;
	bool isPossible3 = true;

	cin >> N;
	for (int i = 0; i < N; i++) {
		vector<int> v1(26, 0);
		vector<int> v2(26, 0);
		isPossible3 = true;
		cin >> a >> b;

		if (a.size() != b.size()) {
			cout << "Impossible" << '\n';
			continue;
		}

		for (int i = 0; i < a.size(); i++) {
			v1[a[i] - 'a']++;
			v2[b[i] - 'a']++;
		}

		for (int i = 0; i < 26; i++) {
			if (v1[i] != v2[i]) {
				cout << "Impossible" << '\n';
				isPossible3 = false;
				break;
			} 
		}
		if (isPossible3) {
			cout << "Possible" << '\n';
		}
	}
}