#include <stdio.h>
#include <math.h>
#include <string.h>
//Lucas Gabriel, INF1A
int main(){
	int c, valor, v[1000], aux = 0; 
	scanf("%i", &valor);
	for(c = 0; c < 1000; c++){
		printf("N[%i] = %i\n", c, aux);
		aux++;
		if(aux == valor){
			aux = 0;
		}
	}

	return 0;
}