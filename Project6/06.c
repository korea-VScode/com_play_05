#include <stdio.h>

int main() {
    float a = 0; // ����
    float b = 0; // �� ������
    float c = 0; // ���� ����

    // ����� �Է�
    printf("����(KRW) = ");
    scanf_s("%f", &a);
    printf("�� ������(%%) = ");
    scanf_s("%f", &b);
    printf("���ڿ���(��) = ");
    scanf_s("%f", &c);


    // ���� ��� �� ���
    for (int i = 1; i <= c; i++) {
        float d = a * b / 100; // ����
        a += d; // ���� + ����
        printf("%d��° ���� : %.2f,  ", i, d);
        printf("�����հ� : %.2f\n", a);
    }

    return 0;
}

