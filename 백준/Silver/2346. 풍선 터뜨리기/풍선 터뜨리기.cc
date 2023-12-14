#include <iostream>
#include <cmath>
#include <deque>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int num;
	deque<pair<int, int>> dq;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		dq.push_back({ num, i + 1 });
	}

	int dq_size = dq.size();
	for (int i = 0; i < dq_size; i++) {
		if (i == 0) {
			int front = dq.front().first;
			int front_sec = dq.front().second;
			cout << front_sec << ' ';
			dq.pop_front();
			if (front > 0) {
				int count1 = front - 1;
				while (count1 > 0) {
					int fro = dq.front().first;
					int fro_sec = dq.front().second;
					dq.pop_front();
					dq.push_back({ fro, fro_sec });
					count1--;
				}
			}
			else {
				int count2 = abs(front);
				while (count2 > 0) {
					int back = dq.back().first;
					int back_sec = dq.back().second;
					dq.pop_back();
					dq.push_front({ back, back_sec });
					count2--;
				}
			}
		}
		else {
			int front = dq.front().first;
			int front_sec = dq.front().second;
			cout << front_sec << ' ';
			dq.pop_front();
			if (i == dq_size - 1) {
				break;
			}
			if (front > 0) {
				int count1 = front - 1;
				while (count1 > 0) {
					int fro = dq.front().first;
					int fro_sec = dq.front().second;
					dq.pop_front();
					dq.push_back({ fro, fro_sec });
					count1--;
				}
			}
			else {
				int count2 = abs(front);
				while (count2 > 0) {
					int back = dq.back().first;
					int back_sec = dq.back().second;
					dq.pop_back();
					dq.push_front({ back, back_sec });
					count2--;
				}
			}
		}
	}
}