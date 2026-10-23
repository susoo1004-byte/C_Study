#include <stdio.h>
int main(void)
{
    int num;
    int sum=0;
    for(int i=0; i<5; i++){
    printf("정수를 입력하시오: ");
    scanf("%d", &num);
        sum+=num;
    }
    printf("합계는 %d입니다.",sum);
}