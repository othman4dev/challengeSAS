#include<stdio.h>
#include<stdlib.h>
//ce program changes l'unité de temperature de Fahrenheit à Celsius.
int main() {
    float c , f;
    printf("Entrer la temperature en Fahrenheit:");
    scanf("%f", &f);
    c = (f-32)/1.8;
    printf("La temperature en Celsius est :%2.f \n",c);
    if( c < 10) {
        printf("Le metéo est tres froid.");
    }
    if ( 11 < c && c < 26) {
        printf("Le meteo est froid.");
    }
    if(26 < c && c < 36) {
        printf("Le meteo est chaud.");
    }
    if(36 < c && c < 50) {
        printf("Le meteo est très tres chaud.");
    }
}