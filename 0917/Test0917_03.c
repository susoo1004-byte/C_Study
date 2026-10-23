#include <stdio.h>
int main(void)
{
    int score;

    printf("성적을 입력하시오:");
    scanf("%d",&score);
    if(score>-1 && score <101){
        score/=10;
        switch (score){
        case 10: case 9: printf("합격: 학점A\n");
            break;
        case 8: printf("합격: 학점B\n");
            break;
        case 7: printf("합격: 학점C\n");
            break;
        case 6: printf("합격: 학점D\n");
            break;
        default: printf("합격: 학점F\n");
            break;
        }
    }
    else
        printf("0~100점 사이만 입력 \n");
    return 0;
}