#include <iostream>
#include <cstring>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	int count = 0;
	char str[101];


	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;
		int len = strlen(str);
		int sameCount = 0;
		for (int j = 0; j < len; j++) {
			char key = str[j];
			int k = j+1;
			for (k; k < len; k++) {
				if (key != str[k]) {
					int l = k+1;
					for (l; l < len; l++) {
						if (key == str[l]) {
							sameCount++; // 연속된 문자가 끝난 상태에서 같은 문자를 만나면 아웃!
						}
					}
				}
			}
		}
		if (sameCount < 1) { // 다른 문자를 만나지 못한 경우(그룹 단어인 경우)
			count++;
		}
	}

	cout << count;
}