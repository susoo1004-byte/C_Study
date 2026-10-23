#include <stdio.h>
int main(void)
{
    int n,m;
    printf("첫번째 정수를 입력하시오: ");
    scanf("%d", &n);
    printf("두번째 정수를 입력하시오: ");
    scanf("%d", &m);

    int num;
    num = n%m;

    if(num==0)
        printf("%d는 %d의 배수입니다.\n", n, m);
    else
        printf("%d는 %d의 배수가 아닙니다.\n", n, m);

    return 0;
}