#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double max(double *arr, int count);

int main() {

	double score[1000];
	double M;
	int i, N;
	double total = 0;
	double avg;

	scanf("%d", &N);						// 이 때, N <= 1,000인 음이 아닌 정수

	for (i = 0; i < N; i++)						// N만큼의 정수값을 score 배열에 입력받기
	{
		scanf("%lf", score + i);
	}

	M = max(score, N);					// max 함수에 score 배열과 N을 인수로 전달하여
												// score 배열의 최댓값을 M 변수에 준다.

	for (i = 0; i < N; i++)
	{
		score[i] = score[i] / M * 100;			// 나누기 계산을 하기 때문에 관련된 자료형은 모두 double
		total += score[i];						// 계산한 값들을 total 에 누적시킨다.
	}

	avg = total / N;

	printf("%lf", avg);

	return 0;
}

double max(double *arr, int count)
{
	int i;
	double max;

	max = arr[0];

	for (i = 0; i < count; i++)
	{
		if (arr[i] > max) max = arr[i];
	}

	return max;
}