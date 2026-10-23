#include <stdio.h>
int main(void)
{
    char c = 'A';
    printf("%d %d\n", c, c+1);

    printf("%c %c\n", 'a'+1, 'X'+1);

    printf("%u %u\n", sizeof(1), sizeof(1.0));

    char c1;
    scanf("%c", &c1);

    int a = 0;
    printf("%d\n", a && 5/a); // a가 0이므로 항상 0임

     a = 5;
    printf("%d %d\n", a++,a++); //보이는 값이 변하지 않아서
}