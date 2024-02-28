#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int pack6, one;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int min_pack6 = 1003, min_one = 1003;

	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		cin >> pack6 >> one;
		min_pack6 = min(min_pack6, pack6);
		min_one = min(min_one, one);
	}

	int key1 = N / 6;
	if (N % 6 != 0) key1++;
	int sum1 = key1 * min_pack6;
	int sum2 = N * min_one;

	int key2 = N / 6;
	int key3 = N - (6 * key2);
	int sum3 = key2 * min_pack6 + key3 * min_one;

	cout << min({ sum1, sum2, sum3 });
}