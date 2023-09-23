#include <stdio.h>

int main(void) {
	int array[8];
	int j = 8;
	int up = 0;
	int down = 0;
	for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
		scanf("%d", &array[i]);
	}
	for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
		if (i + 1 == array[i]) {
			up++;
		}
		else if (array[i] == j--) {
			down++;
		}
	}
	if (up == 8) {
		printf("ascending");
	}
	else if (down == 8) {
		printf("descending");
	}
	else {
		printf("mixed");
	}
}