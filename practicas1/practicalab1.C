/*
 * Creado por: André Fabián Castellanos Aldama
 * Fecha: 7 01 2020
 */
#include "stdio.h"
#include "math.h"

int main(){
	int numBytesChar = (int)sizeof(char);
	int numBytesInt = (int)sizeof(int);
	int numBytesFloat = (int)sizeof(float);
	int numBytesDouble = (int)sizeof(double);

	int minChar = (int)(-pow(2, 8.0*(float)numBytesChar)/2);
	int maxChar = -minChar-1;

	int minInt = (int)(pow(2, 8.0*(float)numBytesInt));
	int maxInt = -minInt-1;

	float minFloat = pow(2.0, -126.0);
	float maxFloat = pow(2.0, 127.0)*(2-pow(2.0, -23.0));

	double minDouble = pow(2.0, -1022.0)*(1-pow(2.0, -52.0));
	double maxDouble = pow(2.0, 1023.0)*(1+(1-pow(2.0, -52.0)));

	printf("char tiene %d número de bytes y un rango de: (%d, %d)\n", numBytesChar, minChar, maxChar);
	printf("Int tiene %d número de bytes y un rango de: (%d, %d)\n", numBytesInt, minInt, maxInt);
	printf("Float tiene %d número de bytes y un rango de: (%g, %g)\n", numBytesFloat, minFloat, maxFloat);	
	printf("Double tiene %d número de bytes y un rango de: (%g, %g)\n", numBytesDouble, minDouble, maxDouble);
	return 0;
}
