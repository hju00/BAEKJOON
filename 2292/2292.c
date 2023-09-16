#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N;												// 1 <= N <= 1,000,000,000				
	scanf("%d", &N);

	int min = 1;
	
	while (1)
	{
		if (N <= 3 * min * min - 3 * min + 1) break;	// 벌집의 규칙을 수식화한 값이 주어진 값
		min++;											// 이상이면 그 때의 값이 최솟값
	}

	printf("%d", min);

	return 0;
}