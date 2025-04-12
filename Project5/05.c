#include <stdio.h>

int main()
{
    int n = 0;
    printf("◆1부터 n까지의 n! 계산◆\n");
    printf("정수 n을 입력하세요(15 이하)>>");
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

//파일 05.c 한글 깨짐 오류 수정 푸시

