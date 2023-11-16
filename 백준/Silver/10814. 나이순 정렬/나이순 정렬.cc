#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

int compare(tuple<int, string, int> t1, tuple<int, string, int> t2) {
	if (get<0>(t1) == get<0>(t2)) {
		return get<2>(t1) < get<2>(t2);
	}
	else {
		return get<0>(t1) < get<0>(t2);
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int age;
	string name;
	vector<tuple<int, string, int>> v;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> age >> name;
		v.push_back(make_tuple(age, name, i));
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++) {
		cout << get<0>(v[i]) << ' ' << get<1>(v[i]) << '\n';
	}
}