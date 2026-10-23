#include <stdio.h>
double square(double x){
    return x*x;
}
int main(void){
    double x;
    printf("실수를 입력하시오: ");
    scanf("%lf", &x);
    printf("주어진 실수 %.2lf의 제곱은 %.2lf입니다.\n", x, square(x));
    return 0;
}