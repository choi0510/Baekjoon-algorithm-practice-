#include <stdio.h> 

int main() {
	int A, B;
	int C;
	int h;
	int m;
	scanf("%d %d", &A, &B);
	scanf("%d", &C);

	h = C / 60;
	m = C % 60;
	A += h;
	B += m;
	if (A > 23)
	{
		A -= 24;
	}
	if (B > 59)
	{
		B -= 60;
		A += 1;
		if (A > 23)
		{
			A -= 24;
		}
	}
	printf("%d %d", A, B);
}