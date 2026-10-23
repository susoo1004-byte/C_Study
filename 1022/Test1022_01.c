#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define SIZE 10
int main(void){
    int arr[SIZE] = {0};
    int i, max;
    printf("---------------------------\n");
    printf("1 2 3 4 5 6 7 8 9 10\n");
    printf("---------------------------\n");
    srand((unsigned int)time(NULL));
    for(i=0; i<SIZE; i++){
        arr[i] = rand()%100;
        printf("%-3d ", arr[i]);
    }
    printf("\n");
    max = arr[0];
    for(i = 1; i<SIZE; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("최댓값: %d\n", max);
    return 0;
}