#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
int num;
vector<int> v;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << ' ';
	}
}