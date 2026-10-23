#include <stdio.h>

int main(void){

    printf("1번 문제\n");
    int a=10;
    printf("a의 값은 %d\n",a);
    int x,y;

    printf("2번 문제\n");
    printf("두 정수를 입력하세요: ");
    scanf("%d %d",&x,&y);
    printf("x의 값은 %d, y의 값은 %d\n",x,y);

    printf("3번 문제\n"); 
    double d;
    printf("실수를 입력하세요: ");
    scanf("%lf",&d);
    printf("d의 값은 %.2lf\n",d);

    printf("4번 문제\n");
    int n;
    char c;
    printf("정수와 문자를 입력하세요: ");
    scanf("%d %c",&n,&c);
    printf("n의 값은 %d, c의 값은 %c\n",n,c);

    printf("5번 문제\n");
    int i,j;
    printf("두 정수를 입력하세요: ");
    scanf("%d %d",&i,&j);
    int k=i+j;
    printf("두 정수의 합은 %d\n",k);

    return 0;
}