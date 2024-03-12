#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
int num;
vector<int> v;
vector<int> len;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}

	len.push_back(v.front());

	for (int i = 1; i < N; i++) {
		if (v[i] > len.back()) {
			len.push_back(v[i]);
		}
		else {
			int lowerNum = lower_bound(len.begin(), len.end(), v[i]) - len.begin();
			len[lowerNum] = v[i];
		}
		
	}
	cout << len.size();
}