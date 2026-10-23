#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int sum;

    printf("첫번째 숫자를 입력하세요: ");
    scanf("%d", &x);
    printf("두번째 숫자를 입력하세요: ");
    scanf("%d", &y);
    // 두 정수 입력>>10, 20
    sum = x + y;
    printf("두수의 합: %d\n", sum);
    return 0;
}