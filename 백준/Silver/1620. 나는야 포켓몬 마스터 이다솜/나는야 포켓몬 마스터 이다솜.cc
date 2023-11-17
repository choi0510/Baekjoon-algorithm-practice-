#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	string name;
	unordered_map<string, int> m1;
	unordered_map<int, string> m2;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> name;
		m1.insert({ name, i + 1 });
		m2.insert({ i+1, name });
	}

	for (int i = 0; i < M; i++) {
		cin >> name;
		if (name[0] >= '1' && name[0] <= '9') {
			cout << m2[stoi(name)] << '\n';
		}
		else {
			cout << m1[name] << '\n';
		}
 	}
}