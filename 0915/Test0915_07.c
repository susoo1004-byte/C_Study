#include <stdio.h>
int main(void)
{
    int num;
    printf("숫자 입력>>");
    scanf("%d",&num);
    if(num>=100)
        printf("large\n");
    else
        printf("small\n");

    int a=1, b=1;
    if(a>0 && b>0)
        printf("YES\n");

    int x=1,y=1,z=1;
    if(x && y && z)
        printf("OK");
}