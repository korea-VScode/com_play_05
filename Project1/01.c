#include <stdio.h>

int main() {
    int a = 0;
    int sum = 0;
	int mul = 1;
    printf("���ڸ� �Է��ϼ���(1~10) >> ");
    scanf_s("%d", &a);

    for (int i = 1; i <= a; i++) {
        sum += i;
		mul *= i;
    }

    printf("1~%d�� �� : %d\n", a, sum);
	printf("1~%d�� �� : %d\n", a, mul);
    return 0;
}
