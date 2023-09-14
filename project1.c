#include <stdio.h>
#include <stdlib.h>
//this program ask for data and then display it in a sentence.
int main() {
    printf("program started");
    char firstName[20];
    char lastName[20];
    int age;
    char sex[10];
    char num[20];
    printf("\n");
    printf("Enter your first name: ");
    scanf("%s", &firstName);
    printf("Enter your last name: ");
    scanf("%s", &lastName);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your sex: ");
    scanf("%s", &sex);
    printf("Enter your phone number : ");
    scanf("%s", &num);
    printf("Your name is %s %s, you are %d years old and you are a %s.\n and your phone number is %s.", firstName, lastName, age, sex, num);

    return 0;
}