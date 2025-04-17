#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int a;
    printf("ENTER 1ST NO. :");
    scanf("%d",&a);
    int b;
    printf("ENTER 2nd NO. :");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("%d",sum);
    return 0;
}