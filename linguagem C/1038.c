#include <stdio.h>
#include <math.h>
//Lucas Gabriel, INF1A
	float main(){
	const float cod1=4.00;
	const float cod2=4.50;
	const float cod3=5.00;
	const float cod4=2.0;
	const float cod5=1.50;
	int cod, qtdade;
	float total;
	scanf("%i%i", &cod, &qtdade);
	switch (cod){
	case 1:
	total=cod1 * qtdade;
	printf("Total: R$ %.2f\n", total);
	break;
	case 2:
	total=cod2 * qtdade;
	printf("Total: R$ %.2f\n", total);
	break;
	case 3:
	total=cod3 * qtdade;
	printf("Total: R$ %.2f\n", total);
	break;
	case 4:
	total=cod4 * qtdade;
	printf("Total: R$ %.2f\n", total);
	break;
	case 5:
	total=cod5 * qtdade;
	printf("Total: R$ %.2f\n", total);
	}
	return 0;
}