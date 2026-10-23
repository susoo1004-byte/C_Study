#include <stdio.h>
int main(void){
int number;
int count=0;
printf("정수를 입력하시오: ");
scanf("%d", &number);
while(number/10!=0){
    number=number/10;
    count++;
}
printf("입력하신 정수는 %d자리 수입니다.\n", count+1);
return 0;
}