#include <stdio.h>
#include <stdlib.h>

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
	if(len&1)
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

void modahash(int arr[], int len){
	struct dict
	{
		int key;
		int value;
	};

	int mode[len][2];
	struct dict arreglohash[len];
	for (int i = 0; i < len; i++)
	{
		arreglohash[i].key = arr[i];
		arreglohash[i].value = 0;
	}
	int buscar(int key){
		int cont = 0;
		for(int j=0; j<len; j++){
			if(arreglohash[j].key == key && arreglohash[j].value == 0){
				cont += 1;
				arreglohash[j].value = 1;
			}
		}
		return cont;
	}
	int j=0;
	int k=0;
	while(j<len){
		int datBusc = buscar(arreglohash[j].key);
		if(datBusc){
			mode[k][0] = arreglohash[j].key;
			mode[k][1] = datBusc;
			k++;
			}
		j++;
		}
	printf("La moda es:\n");
	for(int i=0; i<k; i++){
	printf("%d, %d\n", mode[i][0], mode[i][1]);
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
	int N=10000, i=0;

	//printf("Cuantos numeros quieres ingresar:\n");
	//scanf(" %d", &N);

	//int A[N];
  
	//for(int i=0; i<N; i++){
		//printf("Ingresa los numeros:\n");
		//scanf(" %d", &num);
		//A[i] = num;
	//}
	//Uses system time to seed a proper random number.
    srand(time(NULL));
    //rand() generates a random integer
    //int a = rand();
    //Use mod to restrict range:
    //int b = rand()%25; //random integer from 0-4
	int B[N];
	while(i < N) {
		B[i] = rand()%100; 
		i++;
	}
	printf("Tu arreglo sin ordenar es:\n");
	printarr(B, N);
	//printf("La moda sin arreglar usando tabla hash\n");
	modahash(B, N);
	//sortFeo(B, N);
	//printf("Tu arreglo ordenado es:\n");
	//printarr(B, N);
	printf("La mediana es: %d\n", mediana(B, N));
	//printf("Tu moda usando ciclos anidados:\n");
	//moda(B, N);
	
}
