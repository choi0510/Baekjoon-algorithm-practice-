#include <stdio.h>

int main(void) {
	int num;
	int a, b, c;
	int count = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d %d %d", &a, &b, &c);
		count = 0;
		for (int i = 1; i <= a; i++) {
			for (int j = 1; j <= b; j++) {
				for (int k = 1; k <= c; k++) {
					if ((i % j) == (j % k) && (j % k) == (k % i) && (k % i) == (i % j)) {
						count++;
					}
				}
			}
		}
		printf("%d \n", count);
	}
	
}