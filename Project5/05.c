#include <stdio.h>

int main()
{
    int n = 0;
    printf("��1���� n������ n! ����\n");
    printf("���� n�� �Է��ϼ���(15 ����)>>");
    scanf_s("%d", &n);  

    for (int i = 1; i <= n; i++)
    {
        unsigned long long mul = 1;  
        for (int j = 1; j <= i; j++)
        {
            mul *= j;
        }
        printf("%d! = %llu\n", i, mul); 
    }
    return 0;
}

//���� 05.c �ѱ� ���� ���� ���� Ǫ��

