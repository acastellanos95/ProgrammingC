#include <stdio.h>

int main(){
	float salario, monto, suma;
	int nFac;
	/*
	 * Calculo de salario despues de impuesto
	 */
	printf("Introduce el salario:\n");
	scanf("%f", &salario);
	if(salario >= 400000.0){
		salario *= 0.8;
	}
	else{
		salario *= 0.84;
	}
	/*
	 * Calculo de deducible de facturas
	 */
	printf("Cuantas facturas quieres deducir?\n");
	scanf("%d", &nFac);
	suma = 0.0;
	for(int i=1; i<=nFac; ++i){
		printf("Introduce el monto de la factura %d:\n", i);
		scanf("%f", &monto);
		suma += monto*(0.02);
		if(suma >= 5000){
			printf("El total de deducible de tus facturas es mayor a 5000\n");
			suma = 0.0;
			break;
		}
	}

	/*
	 * Verificar que el monto no excede los 5000
	 */
	printf("Tu salario despues de impuestos y reembolsos es: %f \n", salario - suma);
}
