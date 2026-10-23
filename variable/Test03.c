#include <stdio.h>

int main(void){
double x,y,area,perimeter;
printf("사각형의 가로와 세로를 입력하세요: ");
scanf("%lf %lf",&x,&y);
area = x * y;
perimeter = 2 * (x + y);
printf("사각형의 넓이 : %lf\n", area);
printf("사각형의 둘레 : %lf\n", perimeter);
return 0;
}