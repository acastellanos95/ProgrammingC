#include <stdio.h>

int main(){
  int num;
  char numbin[19]="0000000000000000000";
  printf("Escribe un numero entero:\n");
  scanf(" %d", &num);
  if (num <= 65535 && num > 0){
    printf("Tu numero en decimal es: %d\n", num);
    int i=0;
    while(numbin[i] != '\0'){
    	if(num & 32768 == 32768){
	  numbin[i]='1';
	}
	else{
	  numbin[i]='0';
	}
	num = num << 1;
	i++;
    }
    printf("Tu numero en binario es: %s\n", numbin);
  }
  else{
    printf("Tu numero no puede ser representado con 16 bits");
  }
};
