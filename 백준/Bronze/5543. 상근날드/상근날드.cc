#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int min_sum = 0;
	int min_burger = 2000, burger;
	int min_coke = 2000, coke;

	for(int i = 0; i < 3; i++) {
		cin >> burger;
		min_burger = min(min_burger, burger);
	}

	for (int j = 0; j < 2; j++) {
		cin >> coke;
		min_coke = min(min_coke, coke);
	}

	min_sum += min_burger + min_coke - 50;

	cout << min_sum;
}