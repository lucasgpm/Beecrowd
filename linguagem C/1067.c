#include <stdio.h>
#include <math.h>

int main(){
	int numero, c, aux = 1;
	scanf("%i", &numero);
	for(c = 0; c < numero; c += 2){
		printf("%i\n", aux);
		aux += 2;
	}

	return 0;
}
