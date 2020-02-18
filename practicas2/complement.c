#include <stdio.h>
#define MAXBITLENGTH 16

int main(){
  int num;
  char numbin[MAXBITLENGTH];
  numbin[MAXBITLENGTH+1]='\0';
  printf("Escribe un numero entero:\n");
  scanf(" %d", &num);
  if (num <= 65535 && num > 0){
    printf("Tu numero en decimal es: %d\n", num);
    for(int i=MAXBITLENGTH; i>=0; i--){
    	if(num & 1 == 1){
	  numbin[i]='1';
	}
	else{
	  numbin[i]='0';
	}
	num = num >> 1;
    }
    printf("Tu numero en binario es: %s\n", numbin);
  }
  else{
    printf("Tu numero no puede ser representado con 16 bits\n");
  }
}
