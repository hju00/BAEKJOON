#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define num 42										// 42�� ����� ����

int main() {

	int inputArr[10], remainderArr[10];
	int checkArr[num] = { 0 };						// checkArr�� {0}�� 42���� �迭�� �ʱ�ȭ
	int i;
	int count = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", inputArr + i);			// �� ��, �Է°��� 0 <= N < 1,000
		remainderArr[i] = inputArr[i] % num;		// remainderArr �迭�� 42�� ���� �������� �ʱ�ȭ
	}

	for (i = 0; i < 10; i++)						// remainderArr�� ����ִ� �������� �ش��ϴ�
	{												// checkArr �ε����� +1 ����
		checkArr[remainderArr[i]] += 1;
	}

	for (i = 0; i < num; i++)						// checkArr �迭�� �˻��ϸ鼭 ���� 1�� �ε�����
	{												// ã���� count ������ 1�� �����ش�.
		if (checkArr[i] >= 1) count += 1;
	}

	printf("%d", count);

	return 0;
}