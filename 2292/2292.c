#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N;												// 1 <= N <= 1,000,000,000				
	scanf("%d", &N);

	int min = 1;
	
	while (1)
	{
		if (N <= 3 * min * min - 3 * min + 1) break;	// ������ ��Ģ�� ����ȭ�� ���� �־��� ��
		min++;											// �̻��̸� �� ���� ���� �ּڰ�
	}

	printf("%d", min);

	return 0;
}