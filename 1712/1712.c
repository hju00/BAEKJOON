#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int A, B, C;						// A는 고정 비용 B는 가변 비용 C는 판매 비용 
	scanf("%d %d %d", &A, &B, &C);		// 0 < A, B, C <= 21억

	int count;

	if (B >= C) printf("-1");			// 판매 비용이 가변 비용보다 작거나 같으면 수익이 절대 
	else {								// 발생하지 못하기 때문에 -1 출력
		count = A / (C - B) + 1;		// A, B, C 모두 자연수이기 때문에 count의 최솟값 수식
		printf("%d", count);			// 손익분기점일 때의 판매량 출력
		}

	return 0;
}