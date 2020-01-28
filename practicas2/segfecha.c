#include <stdio.h>

int main(){
	unsigned long int seg, min, hr, dia, mes, year;
	printf("Dame una fecha en segundos:\n");
	scanf(" %lu", &seg);
	min = seg/60;
	seg = seg%60;
	hr = min/60;
	min = min%60;
	dia = hr/24;
	hr = hr%24;
	mes = dia/30;
	dia = dia%30;
	year = mes/12;
	mes = mes%12;
	printf("\nLa fecha es: %lu years, %lu meses, %lu dias, %lu horas, %lu minutos, %lu segundos.", year, mes, dia, hr, min, seg);
};
