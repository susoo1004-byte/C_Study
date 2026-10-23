#include <stdio.h>
int main(void)
{
    unsigned int num;
    printf("십진수 : ");
    scanf("%u", &num);
    if (num>127) {
        printf("종료\n");
        return 0;
    }
    printf("이진수 : ");
    unsigned int mask = 1 << 7;

    for(int i =0; i<8; i++){
        (num&mask)==0? printf("0"):printf("1");
        mask =mask>>1;
    }
    printf("\n");
        return 0;
}