#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokemon pikachu;
    pikachu.hp = 50;
    pikachu.attack = 60;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    printf("%d\n",pikachu.attack);


    struct pokemon charizad;
    charizad.hp = 80;
    charizad.speed = 80;
    charizad.attack = 130;
    charizad.tier = 'S';

    printf("%d",charizad.attack);



    return 0;
}