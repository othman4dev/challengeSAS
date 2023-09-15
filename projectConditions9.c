#include<stdio.h>
#include<stdlib.h>

int main() {
    char a,b;
    printf("Entrer un caractere : ");
    scanf("%c", &a);
    if (a >= 65 && a <= 90) {
        printf("ce caractere est Majuscule et il fait partie des alphabets");
    } else if(a >= 97 && a <= 122) {
        printf("ce caractere est Miniscule et il fait partie des alphabets");
    } else {
        printf("ce caractere ne fait pas partie des alphabets");
    }
}