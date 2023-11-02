#include <iostream>
#include <vector>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<int> v(10001, 0);
	int N;
	int num;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> num;
		v[num-1]++;
	}

	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < v[i]; j++) {
			cout << i+1 << "\n";
		}
	}
}