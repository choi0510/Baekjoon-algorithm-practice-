#include <iostream>
#include <climits>
using namespace std;

int N;
long long ans;
long long key = INT_MAX;
long long price[100003];
long long dis[100003];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;

	for (int i = 1; i < N; i++) {
		cin >> dis[i];
	}

	for (int i = 1; i <= N; i++) {
		cin >> price[i];
	}

	for (int i = 1; i < N; i++) {
		if (key > price[i]) {
			key = price[i];
		}

		ans += key * dis[i];
	}

	cout << ans;
}