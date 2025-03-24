#include<stdio.h>
int main (){
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    if(n>99){
        printf("The number is greater the 99");
    }
    else{
        printf("The number is less than 99");
    }
    return 0;
}