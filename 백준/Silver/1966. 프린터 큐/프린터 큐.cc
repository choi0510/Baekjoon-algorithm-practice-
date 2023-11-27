#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	int N, M;
	int import;
	int count = 0;
	deque<pair<int, int>> d;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		count = 0;
		for (int j = 0; j < N; j++) {
			cin >> import;
			d.push_back(make_pair(j, import));
		}
		while (true) {
			bool isBig = false;
			for (auto item : d) {
				if (d.front().second < item.second) {
					d.push_back(make_pair(d.front().first, d.front().second));
					d.pop_front();
					isBig = true;
					break;
				}
			}	
			if (isBig == false && d.front().first == M) {
				count++;
				break;
			}
			else if(isBig == false) {
				d.pop_front();
				count++;
			}
		}
		cout << count << '\n';
		int size = d.size();
		for (int l = 0; l < size; l++) {
			d.pop_back();
		}
	}
}