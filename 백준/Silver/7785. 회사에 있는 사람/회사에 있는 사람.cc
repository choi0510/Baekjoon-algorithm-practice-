#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int compare(pair<string, string> m1, pair<string, string> m2) {
	return m1.first > m2.first;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	string name, enORle;
	multimap<string, string> m;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> name >> enORle;
		if (enORle == "enter") {
			m.insert({ name, enORle });
		}
		else {
			m.erase(name);
		}
	}

	vector<pair<string, string>> v(m.begin(), m.end());
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << '\n';
	}
}