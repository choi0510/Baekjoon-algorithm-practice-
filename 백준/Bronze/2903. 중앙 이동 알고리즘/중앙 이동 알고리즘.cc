#include <iostream>
#include <cmath>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N;
	int first=1;
	cin >> N;

	for (int i = 0; i < N; i++) {
		first *= 2;
	}

	int second = first + 1;
	for (int i = 0; i < 1; i++) {
		second *= second;
	}

	cout << second;
}