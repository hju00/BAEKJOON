#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int result = 99;

void check(int n);

int main() {

	int N;
	scanf("%d", &N);


	if (N < 100) printf("%d\n", N);				// 100 �Ʒ��� ���ڸ������� ��� ���������̱� ����
	else {												// ���ڸ��� ���� �Լ��� �Ѽ� ��ġ
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