#include<stdio.h>
#include<math.h>
int main() {
    char equation[10];
    printf("Entrer l'equation avec un inconu x (e.g. 2x^{2} + 5 = 0):");
    scanf("%s", &equation);
    for(int i = 0; i < 15; ++i) {
        char solution = equation[i];
        printf("%s",solution);
    }
}