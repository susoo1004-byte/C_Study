#include <stdio.h>
int main(void)
{
    double x;
    printf("화씨 온도 입력>>");
    scanf("%lf", &x);
    double y = 5.0/9.0 * (x - 32);
    printf("섭씨 온도 = %.2lf\n", y);

    return 0;
}