#include <stdio.h>

int main(){
	char disc = 0, diab = 0, tarj;
	float total;
	printf("Introduce el total de tus compras sin descuentos:\n");
	scanf("%f", &total);
	printf("Es discapacitado o de la tercera edad(s/n):\n");
	scanf("%c", &disc);
	if(disc == 's')
		disc = 1;
	printf("Es diabetico o hipertenso(s/n):\n");
        scanf("%c", &diab);
	if(diab == 's')
		diab = 1;
	printf("Cuenta con tarjeta de cliente(s/n):\n");
	scanf("%c", &tarj);
	if(tarj == 's')
		total *= 0.93;
	if(disc == 1 && diab == 1)
			total *= 0.8;
	else{
		total = total - total*(0.2)*(float) disc;
		total = total - total*(0.1)*(float) diab;
	}
	printf("El total es: %f\n", total);

}
