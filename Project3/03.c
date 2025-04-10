#include <stdio.h>

int main() {
    int a = 0;
    while (a >= 2 || a <= 9) 
    {
        printf("구구단 단수를 입력하세요 (ctrl + c 입력시 종료)>> ");
        scanf_s("%d", &a);
        printf("%d단\n", a);
        for (int i = 1; i <= 9; i++) 
        {
            printf("%d * %d = %d\n", a, i, a * i);
        }
    }
    return 0;
}

// Q 컨트롤 씨 누를 때 종료 시그널 사용 안됨
