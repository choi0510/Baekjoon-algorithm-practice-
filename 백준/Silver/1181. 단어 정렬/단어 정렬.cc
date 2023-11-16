#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int compare(string w1, string w2) {
	if (w1.length() == w2.length()) {
		return w1 < w2;
	}
	else {
		return w1.length() < w2.length();
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	string w;
	vector<string> v;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> w;
		v.push_back(w);
	}

	sort(v.begin(), v.end(), compare);

	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
}