#include <stdio.h>
int main(void)
{
    printf("%.1f\n", 1.0+1.0/2.0);
    printf("%.1f\n", 1.0+1/2);
    printf("%.1f\n", 1.0+1.0/2);
    printf("%.1f\n", 1.0+(double)1/2);

    int i=-3, j=2, k=0,m;
    m=++i && ++j && k++;
    printf("%d, %d, %d, %d\n", i, j, k, m);
}