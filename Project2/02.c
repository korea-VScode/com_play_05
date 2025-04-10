#include <stdio.h>

int main() {
    int a = 0;
    char b = 0;
    int c = 0;
    printf("수식을 입력하세요( 0 0 0 입력시 종료) >> ");
    scanf_s("%d %c %d", &a, &b, 1, &c);
    while (a != 0 || b != '0' || c != 0) {
        switch (b) {
        case '+':
            printf("%d + %d = %d\n", a, c, a + c);
            break;
        case '-':
            printf("%d - %d = %d\n", a, c, a - c);
            break;
        case '*':
            printf("%d * %d = %d\n", a, c, a * c);
            break;
        case '/':
            if (c == 0) {
                printf("0으로 나눌 수 없습니다.\n");
            }
            else {
                printf("%d / %d = %d\n", a, c, a / c);
            }
            break;
        default:
            printf("잘못된 연산자입니다.\n");
            break;
        }
        printf("수식을 입력하세요( 0 0 0 입력시 종료) >> ");
        scanf_s("%d %c %d", &a, &b, 1, &c);
    }
    return 0;
}
