#include <stdio.h>
int main(void)
{
    int a;
    char b;
    printf("토익 점수를 입력 하세요 ");
    scanf("%d",&a);
    printf("교양 영어 학점을 입력 하세요 ");
    scanf(" %c",&b);

    if(a>=800 || b=='A')
        printf("합격을 축하합니다.");
    else
        printf("죄송합니다. 다음 기회에 다시 도전하세요");
}