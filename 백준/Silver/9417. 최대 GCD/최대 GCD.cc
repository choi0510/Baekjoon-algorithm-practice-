#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int T;
long long sum;

int GCD(int a, int b) {
	if (a == 0) return b;
	return GCD(b % a, a);
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int num;
	string str;
	string numLine;
	vector<int> v;

	cin >> T;
	cin.ignore();
	while (T--) {
		v.clear();
		sum = 0;

		getline(cin, str);
		stringstream sstream(str);
		while (getline(sstream, numLine, ' ')) {
			v.push_back(stoi(numLine));
		}

		for (int i = 0; i < v.size() - 1; i++) {
			int key = v[i];
			for (int j = i + 1; j < v.size(); j++) {
				sum = (sum > GCD(key, v[j])) ? sum : GCD(key, v[j]);
			}
		}

		cout << sum << '\n';
	}
}