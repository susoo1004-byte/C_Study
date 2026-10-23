#include <stdio.h>
int main(void)
{
    int a,b,c;
    printf("삼각형의 3변을 입력하시오 : ");
    scanf("%d %d %d", &a, &b, &c);
    if(b+c>a && a+c>b && a+b>c)
        printf("올바른 삼각형");
    else
        printf("올바르지 않습니다.");
    return 0;
}