#include<stdio.h>
#include<string.h>

int  main(){
    struct book
    {
        char name[5];
        int noOfPages;
        float price;
    }a,b,c;

    a.noOfPages = 100;
    a.price = 411.5;
    // a.name = "Secret Seven";

    a.name[0] = 'S';
    a.name[1] = 'e';
    a.name[2] = 'v';
    a.name[3] = 'e';
    a.name[4] = 'n';

    // printf("%d\n",a.noOfPages);
    // printf("%d\n",a.price);
    // printf("%d\n",a.name);

    char ch[13];
    strcpy(ch,"Secret Seven");
    printf("%s",ch);
    
    return 0;
}