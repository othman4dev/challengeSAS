#include<stdio.h>
#include<stdlib.h>

int main() {
    float r;
    float pi = 3.14;
    printf("Entrer le rayon r :");
    scanf("%f", &r);
    float p = r * pi * 2;
    printf("La circonference de cette cercle est : %.2f" , p );
}