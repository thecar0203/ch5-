#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int dice[2], quantity[13] = {0};
	srand(time(NULL));

	for (int i = 0; i < 36000; i++) {
		dice[0] = (rand() % 6) + 1;
		dice[1] = (rand() % 6) + 1;

		quantity[dice[0] + dice[1]]++;
	}

	printf("\tsum\ttimes\n");

	for (int i = 2; i < 13; i++) {
		printf("\t%d\t%d\n", i, quantity[i]);
	}

	system("pause");
	return 0;
}