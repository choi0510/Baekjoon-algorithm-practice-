#include <iostream>
#include <vector> 
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	long long count = 0;
	int N;
	int A;
	int B, C;
	vector<int> v;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A;
		v.push_back(A);
	}

	cin >> B >> C;

	for (int i = 0; i < N; i++) {
		v[i] -= B;
		if (v[i] <= 0) {
			count++;
		}
		else {
			if (v[i] % C == 0) {
				count += (v[i] / C) + 1;
			}
			else {
				count += (v[i] / C) + 2;
			}
		}
	}

	cout << count;
}