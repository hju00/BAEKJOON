#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int A, B, C;						// A�� ���� ��� B�� ���� ��� C�� �Ǹ� ��� 
	scanf("%d %d %d", &A, &B, &C);		// 0 < A, B, C <= 21��

	int count;

	if (B >= C) printf("-1");			// �Ǹ� ����� ���� ��뺸�� �۰ų� ������ ������ ���� 
	else {								// �߻����� ���ϱ� ������ -1 ���
		count = A / (C - B) + 1;		// A, B, C ��� �ڿ����̱� ������ count�� �ּڰ� ����
		printf("%d", count);			// ���ͺб����� ���� �Ǹŷ� ���
		}

	return 0;
}