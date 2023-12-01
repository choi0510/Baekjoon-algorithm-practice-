#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int compare(pair<int, int> p1, pair<int, int> p2) {
	if (p1.first == p2.first) {
		return p1.second > p2.second;
	}
	else {
		return p1.first < p2.first;
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int M, N;
	int B;
	int num;
	int time = 0;

	cin >> M >> N >> B;
	int copyB = B;
	vector<int> v(M*N);
	vector<pair<int, int>> p;
	
	for (int i = 0; i < v.size(); i++) {
		cin >> num;
		v[i] = num;
	}
	
	sort(v.begin(), v.end(), greater<int>());

	int max = v[0];
	int min = v[v.size() - 1];

	for (int k = min; k <= max; k++) {
		time = 0;
		B = copyB;
		bool isBreak = false;
		for (int j = 0; j < v.size(); j++) {
			int sub = k - v[j];
			if (k > v[j]) {
				if (B >= abs(sub)) {
					time += abs(sub);
					B -= abs(sub);
				}
				else {
					isBreak = true;
					break;
				}
			}
			else if (k < v[j]) {
				time += abs(sub)*2;
				B += abs(sub);
			}
			else if (k == v[j]) {
				continue;
			}
		}
		if (isBreak) {
			continue;
		}
		else {
			p.push_back({ time, k });
		}
	}
	
	sort(p.begin(), p.end(), compare);

	cout << p[0].first << ' ' << p[0].second;
}