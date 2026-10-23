#include <stdio.h>
void sub(){
    static int scount = 0;
    int account = 0;
    printf("scount = %d\t", scount);

    printf("account = %d\n", account);
    scount++;
    account++;
}
int main(void){
    sub();
    sub();
    sub();
    return 0;
}