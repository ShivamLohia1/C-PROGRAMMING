#include<stdio.h>
// int factorial(int x){
//     int fact = 1;
//     for(int i=2;i<=x;i++){
//         fact = fact * i;
//     }
//     return fact;
// }
// int combination (int n, int r){
//     int ncr = factorial(n)/(factorial(r)*factorial(n-r));
//     return ncr;
// }

int main(){
    int a;
    printf("Enter a :");
    scanf("%d",&a);
    int b;
    printf("Enter b :");
    scanf("%d",&b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d\n",b);
    return 0;
}