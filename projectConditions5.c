#include<stdio.h>
#include<stdlib.h>

int main() {
    int a,b;
    printf("Entrer une annee :");
    scanf("%d", &a);
    a = a ;
    for(int i = 0; a <= 0 ; ++i ){
        a -4;
    }
    if (a == 0) {
            printf("\nAnnee bissextile\n");
            printf("\nNombre des mois est :12\n");
            printf("\nNombre des jours est : 366\n");
            printf("\nNombre des heures : 8784\n");
            printf("\nNombre des minutes : 527040\n");
            printf("\nNombre des seconds : 31622400\n");
        } else if (a > 0) {
            printf("\nAnnee est pas bissextile\n");
            printf("\nNombre des mois est :12\n");
            printf("\nNombre des jours est : 365\n");
            printf("\nNombre des heures : 8760\n");
            printf("\nNombre des minutes : 525600\n");
            printf("\nNombre des seconds : 31536000\n");
        }
}