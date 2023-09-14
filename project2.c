#include<stdio.h>
#include<stdlib.h>
//ce program changes l'unité de temperature de Fahrenheit à Celsius.
int main() {
    float c , f;
    printf("Entrer la temperature en Fahrenheit:");
    scanf("%f", &f);
    c = (f-32)/1.8;
    printf("La temperature en Celsius est :%2.f",c);
    if(-40 < c < 10) {
        printf("Le metéo est très froid.");
    }
    if ( 11 < c < 26) {
        printf("Le metéo est froid.");
    }
    if(26 < c < 36) {
        printf("Le metéo est chaud.");
    }
    if(36 < c < 50) {
        printf("Le metéo est très très chaud.");
    }
}
