#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int count = 0;
	vector<int> v;
	string key = "666";

	cin >> N;

	for (int j = 666; ; j++) {
		if (to_string(j).find(key) != string::npos ) {
			v.push_back(j);
			count++;
		}
		if (count == N) {
			break;
		}
	}

	cout << v[N - 1];
}