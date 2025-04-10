#include <stdio.h>

int main() {
    int a = 0;
    int sum = 0;
	int mul = 1;
    printf("숫자를 입력하세요(1~10) >> ");
    scanf_s("%d", &a);

    for (int i = 1; i <= a; i++) {
        sum += i;
		mul *= i;
    }

    printf("1~%d의 합 : %d\n", a, sum);
	printf("1~%d의 곱 : %d\n", a, mul);
    return 0;
}
