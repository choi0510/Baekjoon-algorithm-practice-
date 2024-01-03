#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int L, P;
	int newsPeople;
	vector<int> v;

	cin >> L >> P;
	int realPropleNum = L * P;
	for (int i = 0; i < 5; i++) {
		cin >> newsPeople;
		v.push_back(newsPeople - realPropleNum);
	}
	
	for (int i = 0; i < 5; i++) {
		cout << v[i] << ' ';
	}

}