#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <typeinfo>
using namespace std;

int K, L;
string sNum;
unordered_map<string, int> s;

bool compare(pair<string, int>& p1, pair<string, int>& p2) {
	return p1.second < p2.second;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> K >> L;
	for (int i = 0; i < L; i++) {
		cin >> sNum;
		s[sNum] = i;
	}	

	vector<pair<string, int>> v;
	for (auto item : s) {
		v.push_back(item);
	}

	sort(v.begin(), v.end(), compare);

	int key = min(K, (int)v.size());
	for (int i = 0; i < key; i++) {
		cout << v[i].first << '\n';
	}
}