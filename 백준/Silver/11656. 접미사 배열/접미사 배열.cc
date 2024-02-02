#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

string str;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<string> v;

	cin >> str;
	int size = str.size();

	for (int i = 0; i < str.size(); i++) {
		v.push_back(str.substr(i, size--));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
}