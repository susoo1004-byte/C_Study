#include <stdio.h>
int main(void)
{
    int sum=0;
    printf("1부터 10사이의 2의 배수의 합은 %d\n", sum);
    for(int i=1; i<=10; i++){
        if(i%2==0){
            sum+=i;
            printf("%d",i);
            if(i<10)
                printf(" + ");
            else
                printf(" = %d입니다", sum);
        
        }
    }
}