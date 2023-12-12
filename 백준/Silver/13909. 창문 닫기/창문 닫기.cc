#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int count = 1;
	vector<int> v;
	int MAX = 2100000000;
	cin >> N;
	
	for (int i = 2; i * i <= MAX; i++) {
		v.push_back(i * i);
	}

	for (int i = 0; i < v.size(); i++) {
		if (v[i] > N) {
			break;
		}
		else {
			count++;
		}
	}

	cout << count;
}