#include<stdio.h>
int main (){
    int a;
    printf("Enter the 1st number :");
    scanf("%d", &a);
     int b;
    printf("Enter the 2nd number :");
    scanf("%d", &b);
    int c;
    printf("Enter the 3rd number :");
    scanf("%d", &c);
    if(a+b > c && b+c > a  && c+a > b){
        printf("Valid Triangle");
    }
    else{
        printf("Invalid Triangle");
    }
return 0;

}