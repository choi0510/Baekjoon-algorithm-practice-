#include <iostream>
using namespace std;

double changeLevel(string level) {
	if (level == "A+") {
		return 4.5;
	} else if (level == "A0") {
		return 4.0;
	} else if (level == "B+") {
		return 3.5;
	} else if (level == "B0") {
		return 3.0;
	} else if (level == "C+") {
		return 2.5;
	} else if (level == "C0") {
		return 2.0;
	} else if (level == "D+") {
		return 1.5;
	} else if (level == "D0") {
		return 1.0;
	} else if (level == "F") {
		return 0.0;
	}

}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	string subname;
	double score;
	string level;
	double sumscore = 0;
	double sumsub = 0;

	for (int i = 0; i < 20; i++) {
		cin >> subname >> score >> level;
		if (level == "P") {
			continue;
		}
		else {
			sumsub += (score * changeLevel(level));
			sumscore += score;
		}
	}
	printf("%.6f", sumsub / sumscore);
}