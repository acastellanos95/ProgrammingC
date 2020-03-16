#include <stdio.h>

int main(){
<<<<<<< HEAD
	char disc, diab, tarj;
=======
	char disc = 0, diab = 0, tarj = 0;
>>>>>>> 22b892948c98c3589e6b0059785a91b70de0c42a
	float total;
	/*
	 * Leer el total de la compra
	 */
	printf("Introduce el total de tus compras sin descuentos:\n");
<<<<<<< HEAD
	scanf("%f", &total);
	/*
	 * Leer si es discapacitado
	 */
=======
	scanf(" %f", &total);
>>>>>>> 22b892948c98c3589e6b0059785a91b70de0c42a
	printf("Es discapacitado o de la tercera edad(s/n):\n");
	scanf(" %c", &disc);
	if(disc == 's')
		disc = 1;
	else{
		disc = 0;
	}
<<<<<<< HEAD

=======
>>>>>>> 22b892948c98c3589e6b0059785a91b70de0c42a
	printf("Es diabetico o hipertenso(s/n):\n");
        scanf(" %c", &diab);
	if(diab == 's')
		diab = 1;
	else{
		diab = 0;
	}
<<<<<<< HEAD

	printf("Cuenta con tarjeta de cliente(s/n):\n");
	scanf(" %c", &tarj);
	if(tarj == 's')
		total *= 0.93;

	if(disc == 1 && diab == 1)
=======
	printf("Cuenta con tarjeta de cliente(s/n):\n");
	scanf(" %c", &tarj);
	if(tarj == 's'){
		total *= 0.93;
		if(disc == 1 && diab == 1)
>>>>>>> 22b892948c98c3589e6b0059785a91b70de0c42a
			total *= 0.8;
		else{
			total = total - total*(0.2)*(float) disc;
			total = total - total*(0.1)*(float) diab;
		}
	}
	else{
		if(disc == 1 && diab == 1)
                        total *= 0.8;
		else{
		total = total - total*(0.2)*(float) disc;
		total = total - total*(0.1)*(float) diab;
		}
	}
	printf("El total es: %f\n", total);

}
