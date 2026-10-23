// int get_no_digits(int n);
// int main(){
//     int n,ctr;
//     printf("정수를 입력하시오: ");
//     scanf("%d",&n);
//     ctr=get_no_digits(n);
//     printf("자리수의 개수: %d\n", ctr);
//     return 0;
// }
// int get_no_digits(int n){
//     int ctr = 0;
//     while(n!=0){
//         ctr++;
//         n/=10;
//     }
//     return ctr;
// }
// int get_no_digits(int n){
//     int n, ctr;
//     printf("정수를 입력하시오: ");
//     scanf("%d", &n);
//     ctr = get_no_digits(n);
//     printf("자리수의 개수: %d\n", ctr);
//     return 0;
// }
// int get_no_digits(int n){
//     static int ctr = 0;
//     if(n!=0){
//         ctr++;
//         get_no_digits(n/10);
//     }
//     return ctr;
// }