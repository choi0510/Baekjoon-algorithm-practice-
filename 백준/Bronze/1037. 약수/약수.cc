#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int num;
	bool isNum = true;
	vector<int> v;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());
	int v_max = v[v.size() - 1];
	for (int i = v_max + 1; ; i++) {
		isNum = true;
		for (int j = 0; j < v.size(); j++) {
			if (i % v[j] != 0) {
				isNum = false;
				break;
			}
		}
		if (!isNum) {
			continue;
		}
		else { 
			for (int j = 0; j < v.size(); j++) {
				if (v[j] * v[v.size() - (j+1)] != i) {
					break;
				}
				cout << i;
				return 0;
			}
			continue;
		}
 	}
}