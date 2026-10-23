#include<stdio.h>
#define SIZE 7
void square_array(int a[]);
void print_array(int a[]);

int main(void){
    int list[SIZE]={1,2,3,4,5,6,7};
    print_array(list);
    square_array(list);
    print_array(list);

    return 0;
}
void square_array(int a[]){
    int i;

    for(i=0; i<SIZE; i++)
    a[i] = a[i] * a[i];
}

void print_array(int a[]){
    int i;

    for(i=0; i<SIZE; i++)
        printf("%3d",a[i]);
    printf("\n");
}