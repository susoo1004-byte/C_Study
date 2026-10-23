#include <stdio.h>
int main(void)
{
    int x,y,i,j;
    printf("2개의 정수를 입력하시오 : ");
    scanf("%d %d",&x,&y);
    i=x/y;
    j=x%y;
    printf("몫 :%d 나머지 :%d\n",i,j);
}