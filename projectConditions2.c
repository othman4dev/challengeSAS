#include<stdio.h>

int main() {
    char a;
    printf("Entrer un caractere :");
    scanf("%c", &a);
    switch (a)
    {
    case 'i':
        printf("%c est une voyelle", a );
        break;
    case 'a':
        printf("%c est une voyelle", a);
        break;
    case 'y':
        printf("%c est une voyelle", a);
        break;
    case 'u':
        printf("%c est une voyelle", a);
        break;
    case 'o':
        printf("%c est une voyelle", a);
        break;
    case 'e':
        printf("%c est une voyelle", a);
        break;
    case 'I':
        printf("%c est une voyelle", a );
        break;
    case 'A':
        printf("%c est une voyelle", a);
        break;
    case 'Y':
        printf("%c est une voyelle", a);
        break;
    case 'U':
        printf("%c est une voyelle", a);
        break;
    case 'O':
        printf("%c est une voyelle", a);
        break;
    case 'E':
        printf("%c est une voyelle", a);
        break;
    default:
        printf("%c est pas une voyelle", a);
        break;
    }
}