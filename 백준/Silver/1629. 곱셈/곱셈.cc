#include <iostream>
using namespace std;
using ll = long long;

ll mul(ll A, ll B, ll C) {
	if (B == 1) {
		return A % C;
	}

	if (B % 2 == 0) {
		ll key = 1;
		ll mulKey = mul(A, B / 2, C);
		for (ll i = 0; i < 2; i++) {
			key *= (mulKey % C);
		}
		return key % C;
	}
	else {
		return (A % C) * mul(A, B - 1, C) % C;
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	ll A, B, C;

	cin >> A >> B >> C;

	cout << mul(A, B, C);

	return 0;
}