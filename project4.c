#include<stdio.h>
#include<stdlib.h>

int main() {
    float a ,b ,c ,d;
    printf("Entrer le premier nomber :");
    scanf("%f", &a);
    printf("Entrer le deuxieme nombre :");
    scanf("%f", &b);
    printf("Entrer le troisieme nombre :");
    scanf("%f", &c);
    printf("Entrer le quatrieme nombre :");
    scanf("%f", &d);
    float total = a + b + c + d;
    float moyenne = total / 4;
    printf("la somme des note est : %.2f \n", total);
    printf("la moyenne des note est : %.2f", moyenne);
}



