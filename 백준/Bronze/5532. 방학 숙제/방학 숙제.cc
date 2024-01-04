#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int L, A, B, C, D;
	int min_lego = 40;
	int legend1;
	int legend2;
	int real_legend;

	cin >> L >> A >> B >> C >> D;
	legend1 = A / C;
	if (A % C != 0) {
		legend1++;
	}
	
	legend2 = B / D;
	if (B % D != 0) {
		legend2++;
	}

	real_legend = max(legend1, legend2);
	cout << L - real_legend;
}