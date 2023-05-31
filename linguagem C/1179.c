#include <stdio.h>
#include <math.h>
#include <string.h>
//Lucas Gabriel, INF1A
int main(){
	int ent, vetp[5], veti[5], c, aux = 0, aux2 = 0, x;
	for(c = 0; c < 15; c++){
		scanf("%i", &ent);
		if(ent % 2 != 0){
			veti[aux2] = ent;
			aux2++;
			if(aux2 == 5){
				aux2 = 0;
				for(x = 0; x < 5; x++){
				printf("impar[%i] = %i\n", x, veti[x]);
			}
		}
	}
		if(ent % 2 == 0){
			vetp[aux] = ent;
			aux++;
			if(aux == 5){
				aux = 0;
				for(x = 0; x < 5; x++){
				printf("par[%i] = %i\n", x, vetp[x]);
			}
		}
	}
}
	for(c = 0; c < aux2; c++){
		printf("impar[%i] = %i\n", c, veti[c]);
	}
	for(c = 0; c < aux ; c++){
		printf("par[%i] = %i\n", c, vetp[c]);
	}

	return 0;
}