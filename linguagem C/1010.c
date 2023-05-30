#include <stdio.h>
#include <math.h>

double main(){
	int cod_a, num_de_pec_a,cod_b, num_de_pec_b;
	double valor_a_pagar, val_unit_a, val_unit_b;
	scanf("%i%i%lf", &cod_a, &num_de_pec_a, &val_unit_a);
	scanf("%i%i%lf", &cod_b, &num_de_pec_b, &val_unit_b);
	valor_a_pagar = (num_de_pec_a * val_unit_a) + (num_de_pec_b * val_unit_b);
	printf("VALOR A PAGAR: R$ %.2lf\n", valor_a_pagar);
	return 0;
}