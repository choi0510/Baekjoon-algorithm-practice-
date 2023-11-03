#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int A, B, V;
	int result;

	cin >> A >> B >> V;

	if (A - B == 1) {
		result = V - B;
	}
	else if (A == V) {
		result = 1;
	}
	else {
		result = ((V - B) / (A - B));
		if (((A - B) * result) != V - B) {
			result++;
		}
	}

	cout << result;
}