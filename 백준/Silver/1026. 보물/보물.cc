#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
int num;
int ans;
vector<int> A;
vector<int> B;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		A.push_back(num);
	}

	for (int i = 0; i < N; i++) {
		cin >> num;
		B.push_back(num);
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater<int>());

	for (int i = 0; i < N; i++) {
		ans += A[i] * B[i];
	}

	cout << ans;
}