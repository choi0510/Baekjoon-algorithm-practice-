#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	int num;
	int count = 0;
	vector<int> v;
	vector<int> v1;
	vector<int> v2;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				if (v[i] + v[j] + v[k] > M) {
					continue; 
				}
				else {
					v1.push_back(v[i] + v[j] + v[k]);
					count++;
				}
			}
		}
	}

	for (int i = 0; i < count; i++) {
		v2.push_back(M - v1[i]);
	}

	int min_index = min_element(v2.begin(), v2.end()) - v2.begin();
	cout << v1[min_index];
}