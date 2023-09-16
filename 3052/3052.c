#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define num 42										// 42를 상수로 지정

int main() {

	int inputArr[10], remainderArr[10];
	int checkArr[num] = { 0 };						// checkArr를 {0}이 42개인 배열로 초기화
	int i;
	int count = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", inputArr + i);			// 이 때, 입력값은 0 <= N < 1,000
		remainderArr[i] = inputArr[i] % num;		// remainderArr 배열을 42로 나눈 나머지로 초기화
	}

	for (i = 0; i < 10; i++)						// remainderArr에 들어있는 나머지에 해당하는
	{												// checkArr 인덱스에 +1 해줌
		checkArr[remainderArr[i]] += 1;
	}

	for (i = 0; i < num; i++)						// checkArr 배열을 검사하면서 값이 1인 인덱스를
	{												// 찾으면 count 변수에 1씩 더해준다.
		if (checkArr[i] >= 1) count += 1;
	}

	printf("%d", count);

	return 0;
}