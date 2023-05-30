#include <stdio.h>
#include <math.h>

double main(){
	int c, aux = 0;
	double numero;
	for(c = 0; c < 6; c++){
		scanf("%lf", &numero);
		if(numero > 0){
			aux++;
		}
	}
	printf("%i valores positivos\n", aux);
	return 0;
}