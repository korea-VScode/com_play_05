#include <stdio.h>

int main() {
    float a = 0; // 원금
    float b = 0; // 연 이자율
    float c = 0; // 투자 연수

    // 사용자 입력
    printf("원금(KRW) = ");
    scanf_s("%f", &a);
    printf("연 이자율(%%) = ");
    scanf_s("%f", &b);
    printf("투자연수(년) = ");
    scanf_s("%f", &c);


    // 이자 계산 및 출력
    for (int i = 1; i <= c; i++) {
        float d = a * b / 100; // 이자
        a += d; // 원금 + 이자
        printf("%d년째 이자 : %.2f,  ", i, d);
        printf("원리합계 : %.2f\n", a);
    }

    return 0;
}

