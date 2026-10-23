#include <stdio.h>
int main(void)
{
    double a,b;
    printf("키과 체중를 입력하세요:");
    scanf("%f %f",&a,&b);

    double c=(a-100)*0.9;
    if(c<b)
    printf("과체중입니다.");
    else if(c=b)
        printf("정상체중입니다.");
    else
        printf("저체중입니다.");

    return 0;
}