#include <stdio.h>

int main() {
	int N1, N2, D;	//N1=���� �ķ�, N2=���� �ķ�, D=�� ������ �ķ��� ���� �˰� ���� ��
	int f = 0;
	scanf_s("%d %d", &N1, &N2);
	scanf_s("%d", &D);
	for (int i = 1; i <= D; i++) {
		if (i % 2 == 1) {
			if (N1 % 2 == 1) f = (N1 / 2) + 1;
			else if (N1 % 2 == 0) f = N1 / 2;
			N1 -= f;
			N2 += f;
		}
		else if (i % 2 == 0) {
			if (N2 % 2 == 1) f = (N2 / 2) + 1;
			else if (N2 % 2 == 0) f = N2 / 2;
			N1 += f;
			N2 -= f;
		}
	}
	printf("%d %d", N1, N2);

	return 0;
}