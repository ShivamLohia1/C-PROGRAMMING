#include<stdio.h>
int main(){
    int x,y;
    printf("Enter thr coordinates : ");
    scanf("%d %d", &x, &y);
    if(x==0 && y==0){
        printf("The point is origin");
    }
    else if(x==0){
        printf("Lies on y-axis");
    }
    else if(y==0){
        printf("Lies on y-axis");
    }
    else{
        printf("The point does not lie on x or y axis");
    }
    return 0;
     
}