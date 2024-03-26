#include <iostream>
#include <set>
using namespace std;

int N;
int instCnt;
multiset<int> ms;
string inst;
int pr;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;

	while (N--) {
		cin >> instCnt;
		for (int i = 0; i < instCnt; i++) {
			cin >> inst >> pr;

			if (inst == "I") {
				ms.insert({ pr });
			}
			else {
				if (ms.empty()) {
					continue;
				}
				if (pr == 1) {
					auto it = ms.end();
					it--;
					ms.erase(it);
				}
				else if (pr == -1) {
					auto it = ms.begin();
					ms.erase(it);
				}
			}
		}
		if (ms.empty()) {
			cout << "EMPTY" << '\n';
		}
		else {
			cout << *(--ms.end()) << ' ' << *(ms.begin()) << '\n';
		}

		ms.clear();
	}
}