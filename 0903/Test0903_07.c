#include <stdio.h>

int main(void){
    double x,y,result;

    printf("두개의 실수를 입력하시오: ");
    scanf("%lf %lf", &x, &y);

    result = x+y;
    printf("%6.2f +%6.2f = %06.2f\n", x, y, result);
    result = x/y;
    printf("%.2f / %.2f = %.2f\n", x, y, result);
    return 0;
}