#include <stdio.h>

int main() {
    float F = 100;
    float C = 15;
    for (int i = 0; i < 9; i++)
    {
        printf("ȭ���µ� %.2f�� �����µ��� %.2f\n", F, (5.0) / (9.0) * (F - 32));
        F -= 2.5;
    }
	printf("\n");
    for (int j = 0; j < 9; j++)
    {
        printf("�����µ� %.2f�� ȭ���µ��� %.2f\n", C, (9.0) / (5.0) * C + 32);
        C += 2.5;
    }
    return 0;
}