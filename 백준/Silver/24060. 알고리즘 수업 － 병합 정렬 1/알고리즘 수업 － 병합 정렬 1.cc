#include <iostream>
using namespace std;

int N, K;
int A[500003];
int tmp[500003];
int cnt = 1;

void merge(int st, int mid, int en) {
	int i = st;
	int j = mid + 1;
	int t = 1;

	while (i <= mid && j <= en) {
		if (A[i] <= A[j]) {
			if (K == cnt) {
				cout << A[i] << '\n';
			}
			tmp[t++] = A[i++];
			cnt++;
		}
		else {
			if (K == cnt) {
				cout << A[j] << '\n';
			}
			tmp[t++] = A[j++];
			cnt++;
		}
	}
	
	while (i <= mid) {
		if (K == cnt) {
			cout << A[i] << '\n';
		}
		tmp[t++] = A[i++];
		cnt++;
	}
	while (j <= en) {
		if (K == cnt) {
			cout << A[j] << '\n';
		}
		tmp[t++] = A[j++];
		cnt++;
	}
	i = st;
	t = 1;
	while (i <= en) {
		A[i++] = tmp[t++];
	}
}

void merge_sort(int st, int en) {

	if (st < en) {
		int mid = (st + en) / 2;
		merge_sort(st, mid);
		merge_sort(mid + 1, en);
		merge(st, mid, en);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	merge_sort(0, N-1);

	if (cnt <= K) {
		cout << -1;
	}
}