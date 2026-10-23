#include <stdio.h>
int main(void)
{
    int m;
    int m5000, m1000, m500, m100;

    printf("물건 값을 입력하시오: ");
    scanf("%d", &m);
    printf("사용자가 낸 돈: 10000\n");
    m = 10000 - m;
    m5000 = m / 5000;
    m1000 = (m % 5000) / 1000;
    m500 = (m % 1000) / 500;
    m100 = (m % 500) / 100;

    printf("오천원권: %d장\n", m5000);
    printf("천원권: %d장\n", m1000);
    printf("오백원: %d개\n", m500);
    printf("백원: %d개\n", m100);

}