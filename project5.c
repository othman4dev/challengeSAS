#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    float x1, x2, y1, y2;
    printf("Entrer les coordonnees de la premiere point: (e.g. M(x,y)) \n x1 = ");
    scanf("%f", &x1);
    printf("Entrer les coordonnees de la premiere point: (e.g. M(x,y)) \n y1 = ");
    scanf("%f", &y1);
    printf("Entrer les coordonnees de la premiere point: (e.g. N(x,y)) \n x2 = ");
    scanf("%f", &x2);
    printf("Entrer les coordonnees de la premiere point: (e.g. N(x,y)) \n y2 = ");
    scanf("%f", &y2);

    float distance = pow((x2-x1) , 2) + pow((y2-y1) , 2);
    distance = sqrtf(distance);
    printf("La distance entre les deux point M(%.2f,%.2f) and N(%.2f,%.2f) est : %.2f" , x1 , y1 ,x2 ,y2 ,distance);
}