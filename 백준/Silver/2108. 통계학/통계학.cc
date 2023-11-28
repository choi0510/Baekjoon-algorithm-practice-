#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int compare1(pair<int, int> p1, pair<int, int> p2) {
	return p1.second < p2.second;
}

int compare(pair<int, int> p1, pair<int, int> p2) {
	if (p1.second == p2.second) {
		return p1.first < p2.first;
	}
	else {
		return p1.second < p2.second;
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int num;
	double sum = 0;
	multimap<int, int> m;
	map<int, int> m1;

	cin >> N;

	int half_N = N / 2;

	for (int i = 0; i < N; i++) {
		cin >> num;
		m.insert({ num, 0 });
		m1.insert({ num, 0 });
		m1[num]++;
		sum += num;
	}

	vector<pair<int, int>> v(m.begin(), m.end());
	vector<pair<int, int>> v1(m1.begin(), m1.end());

	int max = v[v.size() - 1].first;
	int min = v[0].first;
	int center = v[half_N].first;

	sort(v.begin(), v.end(), compare1);

	sort(v1.begin(), v1.end(), compare);

	int mostFre = v1[v1.size() - 1].second;

	int count = 0;
	int realmMostFre = v1[v1.size() - 1].first;
	
	for (int i = 0; i < v1.size(); i++) {
		if (v1[i].second == mostFre) {
			count++;
			if (count == 2) {
				realmMostFre = v1[i].first;
				break;
			}
		}
	}

	if (round(sum / N) == -0) {
		cout << 0 << '\n';
	}
	else {
		cout << round(sum / N) << '\n';
	}
	cout << center << '\n';
	cout << realmMostFre << '\n';
	cout << max - min;
}