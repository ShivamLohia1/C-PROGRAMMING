#include<stdio.h>
int main (){
    int cp;
    int sp;
    printf("Enter the cost price : ");
    scanf("%d", &cp);
    printf("Enter the selling price : ");
    scanf("%d", &sp);
    if(sp>cp){
        printf("Profit");
    }
    if(sp==cp){
        printf("No Profit, No Loss");
    }

}