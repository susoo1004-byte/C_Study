#include <stdio.h>
int main(void)
{
    int num;
    char y;
    printf("정수입력>>");
    scanf("%d", &num);
    (num%2==0)?printf("짝수"):printf("홀수");

    printf("절대값 %d\n", num<0?-num:num);
    printf("%d는 (3의 배수, 5의 배수X)",num);
    printf(" = %d\n ",(num%3==0 && num%5!=0)? 1:0);
    return 0;
}