#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    n%2==0 ? printf("Even number") : printf("Odd number") ;   // if(n%2==0){
    //     printf("Even number");
    // }
    // else{
    //     printf("Odd number");
    // }
    return 0;
}