#include <stdio.h>
#define ROWS 3
#define COLS 5
int main(void){
    int a[ROWS][COLS]={{87,98,80,76,3},{99,89,90,90,0},{65,68,50,49,0}};
    double b[COLS]={0.3,0.4,0.2,0.1,1};
    int i, j;
    for(i=0; i<ROWS; i++){
        double final_scores=0;
        for(j=0; j<COLS; j++){
            if(j<4)
                final_scores += a[i][j]*b[j];
            else
                final_scores -= a[i][j]*b[j];
        }
        printf("학생 #%d의 최종성적=%0.2f\n", (i+1),final_scores);
    }
    return 0;
}