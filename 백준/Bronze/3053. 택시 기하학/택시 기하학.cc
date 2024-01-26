#include <iostream>
#include <math.h>
using namespace std;

int main() {

	double R;
	const double PI = acos(-1);

	cin >> R;

	printf("%.6f", R * R * PI);
	printf("\n");
	printf("%.6f", R * (R * 2));

	// cout를 사용하고 싶으면
	// 고정시킨 후(fixed)  소수점 자릿수 정하기(precision)
	/*cout << fixed;
	cout.precision(4);*/
}