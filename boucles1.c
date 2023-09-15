#include<stdio.h>
#include<stdlib.h>

int main(){
  int a;
  printf("Entrer un nombre : ");
  scanf("%d", &a);
  for ( int i = 0; i<=10;++i){
  int b = a*i;
  printf("\n%d x %d = %d", a, i, b );
  }
}

    