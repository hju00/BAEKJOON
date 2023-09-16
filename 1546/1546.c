#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double max(double *arr, int count);

int main() {

	double score[1000];
	double M;
	int i, N;
	double total = 0;
	double avg;

	scanf("%d", &N);						// �� ��, N <= 1,000�� ���� �ƴ� ����

	for (i = 0; i < N; i++)						// N��ŭ�� �������� score �迭�� �Է¹ޱ�
	{
		scanf("%lf", score + i);
	}

	M = max(score, N);					// max �Լ��� score �迭�� N�� �μ��� �����Ͽ�
												// score �迭�� �ִ��� M ������ �ش�.

	for (i = 0; i < N; i++)
	{
		score[i] = score[i] / M * 100;			// ������ ����� �ϱ� ������ ���õ� �ڷ����� ��� double
		total += score[i];						// ����� ������ total �� ������Ų��.
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