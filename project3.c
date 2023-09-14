#include<stdio.h>
#include<stdlib.h>
//ce program changes l'unité de temperature de Fahrenheit à Celsius.
int main() {
    int a;
    int b;
    printf("Enter The first number :");
    scanf("%d", &a);
    printf("Enter the second number :");
    scanf("%d", &b);
    int add = a + b;
    int sub = a - b;
    int multi = a * b;
    int div = a / b;
    int modul = a % b;
    printf("a + b = %d \n", add);
    printf("a - b = %d \n", sub);
    printf("a x b = %d \n", multi);
    printf("a / b = %d \n", div);
    printf("a %% b = %d \n", modul);
}
