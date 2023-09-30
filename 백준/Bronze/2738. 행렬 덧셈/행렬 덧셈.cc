#include <iostream>
using namespace std;

int main() {
	int n, m;
	int arr1[100][100], arr2[100][100], sum[100][100];
	
	cin >> n >> m;
	for (int j = 0; j < n; j++) {
		for (int k = 0; k < m; k++) {
			cin >> arr1[j][k];
		}
	}
	for (int j = 0; j < n; j++) {
		for (int k = 0; k < m; k++) {
			cin >> arr2[j][k];
		}
	}
	for (int j = 0; j < n; j++) {
		for (int k = 0; k < m; k++) {
			sum[j][k] = arr1[j][k] + arr2[j][k];
		}
	}
	
	for (int j = 0; j < n; j++) {
		for (int k = 0; k < m; k++) {
			cout << sum[j][k] << " ";
		}
		cout << endl;
	}
}