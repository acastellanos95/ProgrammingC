#include <stdio.h>
#define N 4

int main(){
  /*
   * Declaramos primeros dos valores iniciales de a, suma, el a proporcionado por el usuario
   * y el factorial
   */
  int a_0 = 0;
  int a_1 = 1;
  float sum = 0.0;
  int aUsuario;
  int fact = 1;
  /*
   * Comenzamos calculo del segundo termino hasta N-1
   */
  for(int i = 0; i <= N; i++){
    printf("Ingresa el termino entero asignado por el usuario:\n");
    scanf(" %d", &aUsuario);
    if(aUsuario < 0)
      aUsuario *= -1;
    if(aUsuario == 0)
      fact = 1;
    else{
    for(int j = 1; j <= aUsuario; j++)
      fact *= j;
    }
    sum += ((float) a_0 +(float) a_1)/(float) fact;
    a_0 = a_1;
    a_1 = aUsuario;
    fact = 1;
  }
  /*
   *Imprimimos el resultado en pantalla
   */
  printf("El resultado de la sumatoria es: %f\n", sum);
};
