#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	
	vector<int> v;
	string num;

	cin >> num;
	for (int i = 0; i < num.length(); i++) {
		int ch = num[i] - '0';
		v.push_back(ch);
	}

	sort(v.begin(), v.end(), greater<int>());

	for (int i = 0; i < num.length(); i++) {
		cout << v[i];
	}
}