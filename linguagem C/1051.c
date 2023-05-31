#include <stdio.h>
#include <math.h>
//Lucas Gabriel, INF1A
	float main(){
		float salario, imposto;
		scanf("%f", &salario);
		if (salario <= 2000.00){
		printf("Isento\n");
		}
		else if (salario <= 3000.00){
		imposto = (salario - 2000.00) * 0.08;
		printf("R$ %.2f\n", imposto);
		}
		else if (salario <= 4500.0){
		imposto = ((salario - 3000.00) * 0.18 + (1000 * 0.08));
		printf("R$ %.2f\n", imposto);
		}
		else if (salario >= 4500.00){
		imposto = ((salario - 4500.00) * 0.28 + (1500 * 0.18) + (1000 * 0.08));
		printf("R$ %.2f\n", imposto);
		}
	return 0;
}