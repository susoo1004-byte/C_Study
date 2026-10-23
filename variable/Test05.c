#include <stdio.h>

int main(void){
int salary;
int a;
printf("연봉을 입력하시오(단위: 만원) : ");
scanf("%d",&salary);
a = salary/12;
printf("월수령액(단위: 만원) : %d",a);
}