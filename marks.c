#include<stdio.h>
int main (){
    int n;
    printf("Enter percentage :");
    scanf("%d", &n);
    // if(n>80){
    //     printf("Grade A\n");
    // }
    // else if(n>60){
    //     printf("Grade B\n");
    // }
    // else if(n>40){
    //     printf("Grade c\n");
    // }
    // else{
    //     printf("Grade D\n");
    // }
    if(n>80){
        printf("A grade\n");
    }
    else{
        if(n>60){
            printf("B grade\n");
        }
        else{
            if(n>40){
            printf("C grade\n");
        }
        else{
            printf("D grade\n");
        }
        }
        
    }
    return 0;
     
}