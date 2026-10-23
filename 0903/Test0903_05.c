#include <stdio.h>

int main(void){
    char code;
    printf("소문자 하나 입력하세요>> ");
    scanf("%c", &code);
    printf("대문자 변환 %c입니다", code-32);
    return 0;
}