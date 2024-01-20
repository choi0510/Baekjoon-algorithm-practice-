#include <iostream>
#include <vector>
using namespace std;

int N, S;
int cnt;
bool isused[25];
vector<int> v;


void backtracking(int k, int plus, int x) {
	if (plus == S && k != 0) {
		cnt++;
	}

	for (int i = 0; i < N; i++) {
		if (!isused[i] && x <= i) {
			plus += v[i];
			isused[i] = true;
			backtracking(k + 1, plus, i);
			plus -= v[i];
			isused[i] = false;
		}
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int num;
	int plus = 0;

	cin >> N >> S;

	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}

	backtracking(0, plus, 0);

	cout << cnt;

	return 0;
}