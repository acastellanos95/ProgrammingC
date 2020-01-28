#include <stdio.h>

int main(){
  int numUsuario=0;
  int max = 0, min = 0, posMax, posMin;
  int i = 1;
  while(numUsuario != -1){
    printf("Escribe un numero entero:\n");
    scanf(" %d", &numUsuario);
    if(numUsuario > max){
      max = numUsuario;
      posMax = i;
    }
    if(numUsuario < min){
      min = numUsuario;
      posMin = i;
    }
    i++;
  }
  printf("El maximo numero que escribiste fue: %d y fue en la posicion %d\n", max, posMax);
  printf("El minimo numero que escribiste fue: %d y fue en la posicion %d\n", min, posMin);
};
