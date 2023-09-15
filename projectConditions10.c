#include<stdio.h>
#include<stdlib.h>

int main(){
  char date[25];
  char year[4];
  printf("Entrer la date selon la form jj/mm/aaaa :");
  scanf("%s", &date);
  year[0] = date[6];
  year[1] = date[7];
  year[2] = date[8];
  year[3] = date[9];
 date[2] ='-';
 date[5] = '-';
 if(date[3] == '0' && date[4] == '1'){
 	date[3] = 'J';
     date[4] = 'a';
     date[5] = 'n';
     date[6] = 'v';
     date[7] = 'i';
     date[8] = 'e';
     date[9] = 'r';
     date[10] = '-';
     date[11] = year[0];
     date[12] = year[1];
     date[13] = year[2];
     date[14] = year[3];
} else if(date[3] == '0' && date[4] == '2') {
	 date[3] = 'F';
     date[4] = 'e';
     date[5] = 'v';
     date[6] = 'r';
     date[7] = 'i';
     date[8] = 'e';
     date[9] = 'r';
     date[10] = '-';
     date[11] = year[0];
     date[12] = year[1];
     date[13] = year[2];
     date[14] = year[3];
printf("%s",date);
} else if(date[3] == '0' && date[4] == '3') {
	 date[3] = 'M';
     date[4] = 'a';
     date[5] = 'r';
     date[6] = 's';
     date[7] = '-';
     date[8] = year[0];
     date[9] = year[1];
     date[10] = year[2];
     date[11] = year[3];
printf("%s",date);
} else if(date[3] == '0' && date[4] == '4') {
	 date[3] = 'A';
     date[4] = 'v';
     date[5] = 'r';
     date[6] = 'i';
     date[7] = 'l';
     date[8] = '-';
     date[9] = year[0];
     date[10] = year[1];
     date[11] = year[2];
     date[12] = year[3];
printf("%s",date);
} else if(date[3] == '0' && date[4] == '5') {
	 date[3] = 'M';
     date[4] = 'a';
     date[5] = 'i';
     date[6] = '-';
     date[7] = year[0];
     date[8] = year[1];
     date[9] = year[2];
     date[10] = year[3];
printf("%s",date);
} else if(date[3] == '0' && date[4] == '6') {
	 date[3] = 'J';
     date[4] = 'u';
     date[5] = 'i';
     date[6] = 'n';
     date[7] = '-';
     date[8] = year[0];
     date[9] = year[1];
     date[10] = year[2];
     date[11] = year[3];
printf("%s",date);
}else if(date[3] == '0' && date[4] == '7') {
	 date[3] = 'J';
     date[4] = 'u';
     date[5] = 'i';
     date[6] = 'l';
     date[7] = 'l';
     date[8] = 'e';
     date[9] = 't';
     date[10] = '-';
     date[11] = year[0];
     date[12] = year[1];
     date[13] = year[2];
     date[14] = year[3];
printf("%s",date);
}  else if(date[3] == '0' && date[4] == '8') {
	 date[3] = 'A';
     date[4] = 'o';
     date[5] = 'u';
     date[6] = 't';
     date[7] = '-';
     date[8] = year[0];
     date[9] = year[1];
     date[10] = year[2];
     date[11] = year[3];
printf("%s",date);
}else if(date[3] == '0' && date[4] == '9') {
	 date[3] = 'S';
     date[4] = 'e';
     date[5] = 'p';
     date[6] = 't';
     date[7] = 'e';
     date[8] = 'm';
     date[9] = 'b';
     date[10] = 'r';
     date[11] = 'e';
     date[12] = '-';
     date[13] = year[0];
     date[14] = year[1];
     date[15] = year[2];
     date[16] = year[3];
printf("%s",date);
}else if(date[3] == '1' && date[4] == '0') {
	 date[3] = 'O';
     date[4] = 'c';
     date[5] = 't';
     date[6] = 'o';
     date[7] = 'b';
     date[8] = 'r';
     date[9] = 'e';
     date[10] = '-';
     date[11] = year[0];
     date[12] = year[1];
     date[13] = year[2];
     date[14] = year[3];
printf("%s",date);
}else if(date[3] == '1' && date[4] == '1') {
	 date[3] = 'N';
     date[4] = 'o';
     date[5] = 'v';
     date[6] = 'e';
     date[7] = 'm';
     date[8] = 'b';
     date[9] = 'r';
     date[10] = 'e';
     date[11] = '-';
     date[12] = year[0];
     date[13] = year[1];
     date[14] = year[2];
     date[15] = year[3];
printf("%s",date);
}else if(date[3] == '1' && date[4] == '2') {
	 date[3] = 'D';
     date[4] = 'e';
     date[5] = 'c';
     date[6] = 'e';
     date[7] = 'm';
     date[8] = 'b';
     date[9] = 'r';
     date[10] = 'e';
     date[11] = '-';
     date[12] = year[0];
     date[13] = year[1];
     date[14] = year[2];
     date[15] = year[3];
printf("%s",date);
}
}

