#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int result = 99;

void check(int n);

int main() {

	int N;
	scanf("%d", &N);


	if (N < 100) printf("%d\n", N);				// 100 아래의 두자리수들은 모두 등차수열이기 때문
	else {												// 세자리수 부터 함수로 한수 서치
		check(N);
		printf("%d", result);
	}


	return 0;
}

void check(int n) {

	int a, b, c;

	for (int i = 100; i < n + 1; i++) {
		a = i % 10;
		c = i / 100;
		b = (i - (100 * c) - a) / 10;
		
		if ((b - a) == (c - b))	result += 1;
	}
}