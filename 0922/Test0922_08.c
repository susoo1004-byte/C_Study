#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
    int num, c=0;
    srand(time(NULL));
    int ans = rand()%10;

    do{
        printf("정답을 추측하여 보시오: ");
        scanf("%d",&num);
        c++;
        if(ans==num)
        printf("축하합니다 시도횟수=%d",c);
        else if(ans<num)
        printf("제시한 정수가 높습니다.\n");
        else
        printf("제시한 정수가 낮습니다.\n");
    }while(ans != num);
    return 0;
}