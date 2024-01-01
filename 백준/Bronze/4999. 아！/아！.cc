#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	string sound1, sound2;

	cin >> sound1 >> sound2;

	if (sound1.size() >= sound2.size()) {
		cout << "go";
	}
	else {
		cout << "no";
	}
}