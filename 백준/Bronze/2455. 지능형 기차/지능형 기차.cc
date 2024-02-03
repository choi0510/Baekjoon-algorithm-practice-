#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int max_person = 0;
	int leave_maam, geton_maam;
	int sum_num = 0;

	for (int i = 0; i < 4; i++) {
		cin >> leave_maam >> geton_maam;
		sum_num -= leave_maam;
		sum_num += geton_maam;
		max_person = max(max_person, sum_num);
	}

	cout << max_person;
}