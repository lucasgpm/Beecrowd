#include <stdio.h>
#include <math.h>
//Lucas Gabriel, INF1A
	float main(){
		float valores, c = 0, armazem; 
		int aux = 0;
		for(c = 0; c< 6; c++){
		scanf("%f", &valores);
		if(valores > 0){
			aux++;
			armazem += valores;
		}
	}	
	printf("%i valores positivos\n", aux);
	printf("%.1f\n", armazem / aux);
		return 0;
}