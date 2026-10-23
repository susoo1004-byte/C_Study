#include <stdio.h>
int main(void)
{
    int num;
    printf("정수를 입력하시오 : ");
    scanf("%d", &num);
    num = ~num;
    num +=0x1;
    printf("2의 보수: %d \n", num);
}