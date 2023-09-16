#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N;
	scanf("%d", &N);

	int n = 1;
	
	while (1) {
		if (N <= (n * (n + 1)) / 2) break;
		n++;
	}

	int k = (n * (n + 1)) / 2;

	if (n % 2 == 0) {
		printf("%d/%d", (n + 1) - (k - N + 1), k - N + 1);
	}
	else {
		printf("%d/%d", k - N + 1, (n + 1) - (k - N + 1));
	}



	return 0;
}