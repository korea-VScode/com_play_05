#include <stdio.h>

int main() {
    int a = 0;
    char b = 0;
    int c = 0;
    printf("������ �Է��ϼ���( 0 0 0 �Է½� ����) >> ");
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
                printf("0���� ���� �� �����ϴ�.\n");
            }
            else {
                printf("%d / %d = %d\n", a, c, a / c);
            }
            break;
        default:
            printf("�߸��� �������Դϴ�.\n");
            break;
        }
        printf("������ �Է��ϼ���( 0 0 0 �Է½� ����) >> ");
        scanf_s("%d %c %d", &a, &b, 1, &c);
    }
    return 0;
}
