#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	string v;
	int N;
	int B;
	int count = 0;

	cin >> N >> B;

	while (N >= 1) {
		if (B >= 11) {
			int r = N % B;
			N /= B;
			if (r >= 10) {
				v.push_back(r + 'A' - 10);
			}
			else {
				v.push_back(r + '0');
			}
		}
		else {
			int r = N % B;
			N /= B;
			v.push_back(r + '0');
		}
		count++;
	}

	for (int i = count-1; i >= 0; i--) {
		cout << v[i];
	}
}