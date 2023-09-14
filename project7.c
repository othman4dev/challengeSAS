#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, nn00, n0n0, n00n;
    printf("Entrer le nombre :");
    scanf("%d", &n);
    nn00 = n / 100;
    n0n0 = n - nn00*100;
    n0n0 = n0n0 / 10;
    n00n = n - nn00*100 - n0n0*10;
    int inverse = n00n*100 + n0n0*10 + nn00;
    printf("le nombre inverse est :%2.d ", inverse);
}