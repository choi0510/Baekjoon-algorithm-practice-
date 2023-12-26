#include <iostream>
#include <list>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, K;
	list<int> L;

	cin >> N >> K;
	
	for (int i = 1; i <= N; i++) {
		L.push_back(i);
	}
	auto t = L.begin();

	cout << "<";
	while(L.size() != 0) {
		for (int i = 1; i < K; i++) {
			t++;
			if (t == L.end()) {
				t = L.begin();
				continue;
			}
		}
		if (L.size() == 1) {
			cout << *t;
		}
		else {
			cout << *t <<", ";
		}
		t = L.erase(t);
		if (t == L.end()) {
			t = L.begin();
		}
	}
	cout << ">";
}