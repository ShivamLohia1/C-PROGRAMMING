#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of rows: ");
    scanf("%d", &n);
    for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        int a = n/2 + 1;
        if(j==a || i==a) printf("*");
        else printf(" ");
       }
       printf("\n");
    }
    return 0;
}