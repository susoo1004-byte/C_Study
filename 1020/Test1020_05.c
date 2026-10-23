#include <stdio.h>
#define SIZE 5
int main(void){
    int scores[SIZE] = {31,63, 62};
    int i;
    scores[0] = 100;
    for(i=0; i<SIZE; i++)
        printf("scores[%d] = %d\n", i, scores[i]);
    
    return 0;
}