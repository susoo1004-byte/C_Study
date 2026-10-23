#include <stdio.h>
int main(void)
{
    int number;
    int sum=0;
    printf("정수를 입력 하세오: ");
    scanf("%d", &number);
    while(number !=0)
    {
        sum+=number%10;
        number/=10;
    }
    printf("각 자리수의 합 = %d\n", sum);
}