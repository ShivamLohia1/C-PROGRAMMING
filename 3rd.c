#include<stdio.h>
int smallest_divisor(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return i;
        }
    }
    return n;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n==1){
        printf("prime number");
    }
    else{
        int divisor = smallest_divisor(n);
        if(divisor==n){
            printf("prime number");
        }
        else{
            printf("%d\n",divisor);
        }
    }
    return 0;
}