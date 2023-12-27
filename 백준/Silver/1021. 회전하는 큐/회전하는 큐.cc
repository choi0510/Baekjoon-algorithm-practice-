#include <iostream>
#include <deque>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	deque<int> dq;
	int N, M;
	int num;
	int count1 = 0;
	int count2 = 0;

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		dq.push_back(i);
	}

	for (int i = 0; i < M; i++) {
		cin >> num;
		if (dq.front() == num) {
			dq.pop_front();
		}
		else {
			for (int j = 0; j < dq.size(); j++) {
				if (dq[j] == num) {
					int size = dq.size();
					if (dq.size() - (j + 1) < (j + 1) - 1) {
						while (j < size) {
							int copy = dq.back();
							dq.pop_back();
							dq.push_front(copy);
							count2++;
							j++;
						}
						dq.pop_front();
						break;
					}
					else {
						while (j > 0) {
							int copy = dq.front();
							dq.pop_front();
							dq.push_back(copy);
							count1++;
							j--;
						}
						dq.pop_front();
						break;
					}
				}
			}
		}
	}
	cout << count1 + count2;
}