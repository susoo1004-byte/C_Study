#include <stdio.h>
int main(void){
    int x;
    printf("변수x의 크기: %d\n", sizeof(x));
    printf("char형 변수의 크기: %d\n", sizeof(char));
    printf("int형 변수의 크기: %d\n", sizeof(int));
    printf("short형 변수의 크기: %d\n", sizeof(short));
    printf("long형 변수의 크기: %d\n", sizeof(long));
    printf("float형 변수의 크기: %d\n", sizeof(float));
    printf("double형 변수의 크기: %d\n", sizeof(double));
    return 0;
}