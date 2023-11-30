#include <iostream>
#include <deque>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	int num;
	int count = 0;
	deque<int> dq1;
	deque<int> dq2;
	deque<char> dqChar;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		dq1.push_back(num);
	}

	int first = dq1.front();

	for (int i = 1; i <= first; i++) {
		dq2.push_back(i);
		dqChar.push_back('+');
		count++;
	}

	while (!dq1.empty()) {
		if (dq1.empty()) {
			break;
		}
		if (dq2.empty()) {
			int start = count;
			for (int i = start + 1; i <= dq1.front(); i++) {
				dq2.push_back(i);
				dqChar.push_back('+');
				count++;
			}
		}
		else {
			if (dq2.back() == dq1.front()) {
				dq2.pop_back();
				dq1.pop_front();
				dqChar.push_back('-');
			}
			else if (dq2.back() < dq1.front()) {
				int start = count;
				for (int i = start + 1; i <= dq1.front(); i++) {
					dq2.push_back(i);
					dqChar.push_back('+');
					count++;
				}
			}
			else if (dq2.back() > dq1.front()) {
				cout << "NO";
				return 0;
			}
		}
	}

	int dqSize = dqChar.size();
	for (int i = 0; i < dqSize; i++) {
		cout << dqChar[i] << '\n';
	}
}