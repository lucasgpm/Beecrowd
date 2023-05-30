#include <stdio.h>
#include <math.h>
//Lucas gabriel, INF1A
int main(){
	int segundos, horas, minutos;
	scanf("%i", &segundos);
	horas = segundos / 3600;
	segundos -= horas * 3600;
	minutos = segundos / 60;
	segundos -= minutos * 60; 
	printf("%i:",horas);
	printf("%i:",minutos);
	printf("%i\n",segundos);
	return 0;
}