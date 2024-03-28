#include <iostream>
using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);

	int price_sum;
	int price_book;

	cin >> price_sum;
	for (int i = 0; i < 9; i++) {
		cin >> price_book;
		price_sum -= price_book;
	}

	cout << price_sum;
}