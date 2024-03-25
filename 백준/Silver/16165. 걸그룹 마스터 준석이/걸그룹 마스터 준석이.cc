#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int N, M;
string teamName;
string perName;
int perCount;
string Quiz;
int QuizGenre;
unordered_map<string, vector<string>> m;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;

	while (N--) {
		cin >> teamName >> perCount;
		for (int i = 0; i < perCount; i++) {
			cin >> perName;
			m[teamName].push_back(perName);
		}
	}

	for (auto& item : m) {
		sort(item.second.begin(), item.second.end());
	}

	bool isFind = false;

	while (M--) {
		isFind = false;
		cin >> Quiz >> QuizGenre;
		if (QuizGenre) {
			for (auto item : m) {
				for (auto name : item.second) {
					if (name == Quiz) {
						cout << item.first << '\n';
						isFind = true;
						break;
					}
				}
				if (isFind) {
					break;
				}
			}
		}
		else {
			for (auto item : m) {
				if (item.first == Quiz) {
					for (auto name : item.second) {
						cout << name << '\n';
					}
					break;
				}
			}
		}
	}
}