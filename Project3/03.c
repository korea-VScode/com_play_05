#include <stdio.h>

int main() {
    int a = 0;
    while (a >= 2 || a <= 9) 
    {
        printf("������ �ܼ��� �Է��ϼ��� (ctrl + c �Է½� ����)>> ");
        scanf_s("%d", &a);
        printf("%d��\n", a);
        for (int i = 1; i <= 9; i++) 
        {
            printf("%d * %d = %d\n", a, i, a * i);
        }
    }
    return 0;
}

// Q ��Ʈ�� �� ���� �� ���� �ñ׳� ��� �ȵ�
