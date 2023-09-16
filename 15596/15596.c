#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long sum(int* a, int n);

int n;			// 1 <= n <= 3,000,000
int a[3000000];							// 0 <= a[i] <= 1,000,000

int main() {

	scanf("%d", &n);






	return 0;
}

long long sum(int* a, int n) {

	long long ans = 0;

	for (int i = 0; i < n; i++)
	{
		ans += *(a + i);
	}

	return ans;
}