#include <iostream>
#include <cmath>
#include <deque>
#include <algorithm>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	int num;
	double sum = 0;
	deque<int> dq;

	cin >> n;
	if (n == 0) {
		cout << 0;
		return 0;
	}
	int x = round(n * 0.15);
	for (int i = 0; i < n; i++) {
		cin >> num;
		dq.push_back(num);
	}

	sort(dq.begin(), dq.end());

	for (int i = 0; i < x; i++) {
		dq.pop_front();
		dq.pop_back();
	}
	
	double size = dq.size();
	for (int i = 0; i < size; i++) {
		sum += dq.back();
		dq.pop_back();
	}
	cout << round(sum / size);
}