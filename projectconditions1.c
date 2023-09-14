#include <stdio.h>

int main() {
    int a;
    printf("Entrer un nombre : ");
    scanf("%d", &a);

    int b = a;

    if (a % 2 == 1) {
        printf("Le nombre %d est impair\n", b);
    } else {
        printf("Le nombre %d est pair\n", b);
    }
    
    return 0;
}
