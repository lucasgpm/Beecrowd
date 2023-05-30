#include <stdio.h>
#include <math.h>
//Lucas gabriel, INF1A
int main(){
	int dindin, notas;
	scanf("%i", &dindin);
	printf("%i\n", dindin);
	notas = dindin / 100;
	dindin -= notas * 100;
	printf("%i nota(s) de R$ 100,00\n", notas);
	notas = dindin / 50;
	dindin -= notas * 50;
	printf("%i nota(s) de R$ 50,00\n", notas);
	notas = dindin / 20;
	dindin -= notas * 20;
	printf("%i nota(s) de R$ 20,00\n", notas);
	notas = dindin / 10;
	dindin -= notas * 10;
	printf("%i nota(s) de R$ 10,00\n", notas);
	notas = dindin / 5;
	dindin -= notas * 5;
	printf("%i nota(s) de R$ 5,00\n", notas);
	notas = dindin / 2;
	dindin -= notas * 2;
	printf("%i nota(s) de R$ 2,00\n", notas);
	printf("%i nota(s) de R$ 1,00\n", dindin);
	return 0;
}