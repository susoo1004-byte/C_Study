#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int answer1, answer2;
    int number;
    for (int i = 0; i < 5; i++) {
        answer1 = rand() % 10;
        answer2 = rand() % 10;
        printf("%d + %d = ", answer1, answer2);
        scanf("%d", &number);
        if (number == answer1 + answer2)
            printf("정답입니다.\n");
        else
            printf("틀렸습니다.\n");
    }
    return 0;
}