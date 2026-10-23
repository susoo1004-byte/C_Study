#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int coin_toss();
int main(void){
    int toss;
    int heads = 0;
    int tails = 0;

    srand((unsigned int)time(NULL));

    for(toss=0; toss<100; toss++){
        if(coin_toss() == 1)
            heads++;
        else
            tails++;
    }
    printf("동전의 앞면 : %d\n", heads);
    printf("동전의 뒷면: %d\n", tails);
    return 0;
}
int coin_toss(){
    //return rand()%2;
    int i = rand()%2;
    if(i==0)
        return 1;
    else
        return 0;
}
