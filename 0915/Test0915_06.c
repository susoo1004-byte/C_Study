#include <stdio.h>
int main(void)
{
    char x;
    printf("문자입력>>");
    scanf("%c",&x);

    if(x>='A'&& x<='Z')
        printf("대문자입니다.");
    else if(x>='a'&& x<='z')
        printf("소문자입니다.");
    else if(x>='0' && x<='9')
        printf("숫자문자입니다");
    else   
        printf("기타문자입니다.");
    
    return 0;
}