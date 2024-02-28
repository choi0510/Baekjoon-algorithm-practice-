#include <iostream>
#include <string>
using namespace std;

string A, B;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int count = 0;

	cin >> A >> B;

	while (B != A) {

		if (stoi(B) < stoi(A)) {
			cout << -1;
			return 0;
		}

		if (B[B.size() - 1] == '0' || B[B.size() - 1] == '2' || B[B.size() - 1] == '4' || B[B.size() - 1] == '6' || B[B.size() - 1] == '8') {
			int numB = stoi(B) / 2;
			B = to_string(numB);
			count++;
		}
		else if (B[B.size() - 1] == '1') {
			B = B.substr(0, B.size() - 1);
			count++;
		}
		else {
			cout << -1;
			return 0;
		}
	}

	cout << count + 1;
}