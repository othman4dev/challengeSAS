#include<stdio.h>
#include<stdlib.h>

int main() {
    int a;
    printf("Entrer un nombre :");
    scanf("%d", &a);
    if (a < 0) {
        printf("Ce nombre est negative.");
    }
    if (a == 0) {
        printf("Ce nombre egal a zero.");
    }
    if (a > 0) {
        printf("Ce nombre est positive.");
    }
}
