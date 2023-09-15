#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  time_t t;
  srand((unsigned) time(&t));
  int random = rand() % 7;
  switch (random) {
  	case 0:
      printf("Lundi");
      break;
      case 1:
      printf("Mardi");
      break;
      case 2:
      printf("Mercredi");
      break;
      case 3:
      printf("Jeudi");
      break;
      case 4:
      printf("Vendredi");
      break;
      case 5:
      printf("Samedi");
      break;
      case 6:
      printf("Dimenche");
      break;
      }
}

    