#include<stdio.h>
#include<stdlib.h>

int main(){
  float a;
  printf("Entrer votre note : ");
  scanf("%f", &a);
  if(a<10){
    printf("Vous etes recale");
  } else if(a>=10 && a<12) {
    printf("Vous obteniez la mention passable.");
  } else if(a>=12 && a<14) {
    printf("Vous obteniez la mention asser bien.");
  } else if(a>=14 && a<16) {
    printf("Vous obteniez le mention bien.");
  } else if (a>=16) {
    printf("Vous obteniez la mention tres bien");
  }
} 
