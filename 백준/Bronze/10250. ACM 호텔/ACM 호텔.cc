#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num;
	int h, w, n;
	int xx, yy;

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> h >> w >> n;
		yy = (n % h) != 0 ? (n % h) : h;
		xx = (n % h) != 0 ? (n / h) : (n / h) - 1;
		cout << yy;
		cout.width(2);
		cout.fill('0');
		cout << xx + 1<< endl;
	}
}