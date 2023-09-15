#include<stdio.h>
#include<stdlib.h>
int main() {
    char a,b;
    printf("Entrer un caractere : ");
    scanf("%c", &a);
    if (a >= 65 && a <= 90) {
        printf("This caractere est Majuscule");
    } else {
        printf("This caractere est Miniscule");
    }
}