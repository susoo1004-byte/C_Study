#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define SIZE 5
int main(void){
    int i,num;
    int sum=0;
    int scores[SIZE];
    srand((unsigned int)time(NULL));
    int rd = rand()%100;
    for(i=0; i<SIZE; i++){
        printf("%d번째 정수를 입력하시오 : ", i+1);
        scanf("%d", &num);
        scores[i] = num;
    }

    for(i=0; i<SIZE; i++){
    printf("scores[%d] = %d\n", i, scores[i]);
    sum+=scores[i];
    }
    printf("배열 데이터의 합 = %d\n", sum);
    printf("배열 데이터의 평균 = %.2f\n", (float)sum/SIZE);
    return 0;
}