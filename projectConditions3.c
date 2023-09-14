#include<stdio.h>

int main() {
    int a , b;
    printf("Entrer le premier nombre a:");
    scanf("%d", &a);
    printf("Entrer le deuxieme nombre b:");
    scanf("%d", &b);
    if (a == b) {
        int somme = (a + b) *3;
        printf("Le triple de la somme de a et b est :  %d", somme);
    } else {
        int somme = a + b;
        printf("La somme de a et b est :  %d", somme);
    }
}