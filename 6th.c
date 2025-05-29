#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int even = 0;
    int odd = 0;
    while(n>0){
        int digit = n % 10;
        if(digit % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
        n = n/10;
    }
    printf("Odd count : %d\n",odd);
    printf("even count : %d\n",even);
    return 0;

}