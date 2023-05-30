#include <stdio.h>
#include <math.h>
//Lucas gabriel, INF1A
float main(){
	float dindin; 
	int notas;
	scanf("%f", &dindin);

	printf("NOTAS:\n");
	notas = dindin / 100;
	dindin -= notas * 100;
	printf("%i nota(s) de R$ 100.00\n", notas);
	notas = dindin / 50;
	dindin -= notas * 50;
	printf("%i nota(s) de R$ 50.00\n", notas);
	notas = dindin / 20;
	dindin -= notas * 20;
	printf("%i nota(s) de R$ 20.00\n", notas);
	notas = dindin / 10;
	dindin -= notas * 10;
	printf("%i nota(s) de R$ 10.00\n", notas);
	notas = dindin / 5;
	dindin -= notas * 5;
	printf("%i nota(s) de R$ 5.00\n", notas);
	notas = dindin / 2;
	dindin -= notas * 2;
	printf("%i nota(s) de R$ 2.00\n", notas);

	printf("MOEDAS:\n");
	notas = dindin / 1;
	dindin -= notas * 1;
	printf("%i moeda(s) de R$ 1.00\n", notas);
	notas = dindin / 0.50;
	dindin -= notas * 0.50;
	printf("%i moeda(s) de R$ 0.50\n", notas);
	notas = dindin / 0.25;
	dindin -= notas * 0.25;
	printf("%i moeda(s) de R$ 0.25\n", notas);
	notas = dindin / 0.10;
	dindin -= notas * 0.10;
	printf("%i moeda(s) de R$ 0.10\n", notas);
	notas = dindin / 0.05;
	dindin -= notas * 0.05;
	printf("%i moeda(s) de R$ 0.05\n", notas);
	notas = 0;
	notas = dindin / 0.009;
	printf("%i moeda(s) de R$ 0.01\n", notas);
	return 0;
}