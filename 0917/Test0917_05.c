#include <stdio.h>
int main(void)
{
    int num,num1,num2;
    char a;
    
    printf("수식을 입력하시오(예: 2 + 5)>>");
    scanf("%d %c %d", &num, &a, &num1);
        switch (a) {
            case '+':
                num2=num+num1;
                break;
            case '-':
                num2=num-num1;
                break;
            case '/':
                num2=num/num1;
                break;
            case '*':
                num2=num*num1;
                break;
            case '%':
                num2=num%num1;
                break;
        }
        printf("%d %c %d =",num,a,num1);
        printf("%d",num2);
    }

