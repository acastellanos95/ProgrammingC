#include <stdio.h>


void sortFeo(int arr[], int len){
/*
 * Mi algoritmo para ordenar el arreglo
 */
  for(int i=0; i<len; i++){
    int min = arr[i];
    for(int j=i+1; j<len; j++){
      if(arr[j]<min){
	int cambio=arr[i];
	arr[i]=arr[j];
	arr[j]=cambio;
	min = arr[i];
      }
    }
  }
}


int mediana(int arr[], int len){
/*
 * funcion para obtener mediana de un arreglo ordenado
 */
  if(len&1==1)
    return arr[len/2];
  else{
    return (arr[(len-1)/2]+arr[len/2])/2;
  }
}


void moda(int arr[], int len){
/*
 * Funcion para calcular moda para un arreglo ordenado
 * al terminar es necesario extraer F de la memoria
 */
  int F[len][2];
  int i=0, j=0, cont, dc;
  while(i<len){
    dc=arr[i];
    cont=0;
    for(; i<len && arr[i]==dc; i++){
      cont++;
    }
    F[j][0]=dc;
    F[j][1]=cont;
    j++;
  }
  printf("La moda es:\n");
  for(int k=0; k<j; k++){
  printf("%d, %d\n", F[k][0], F[k][1]);
  }
}


void printarr(int arr[], int len){
/*
 * funcion para imprimir arreglos
 */
  printf("[ ");
  for(int i=0; i<len; i++){
    printf(" %d,", arr[i]);
  }
  printf("] \n");
}

int main(){
  int N, num;

  printf("Cuantos numeros quieres ingresar:\n");
  scanf(" %d", &N);

  int A[N];
  
  for(int i=0; i<N; i++){
    printf("Ingresa los numeros:\n");
    scanf(" %d", &num);
    A[i] = num;
  }
  printarr(A, N);
  sortFeo(A, N);
  printarr(A, N);
  printf("La mediana es: %d\n", mediana(A, N));
  moda(A, N);
}
