#include <stdio.h>
#define PI 3.14//상수선언 먼저 처리해서 사용가능
int main(void){
    // float radius;
    // printf("반지름을 입력하시오: ");
    // scanf("%f", &radius);
    // float area = radius*radius*3.14;
    // printf("원의 면적: %.2f",area);
    double radius;
    double area;
    const double PI2 = 3.14;//상수선언

    printf("반지름을 입력하시오: ");
    scanf("%lf", &radius);
    area = radius*radius*PI2;
    printf("원의 면적: %.2lf",area);
    
    return 0;
}