#include <stdio.h>
#include <math.h>

long int main(){
	int numero, c;
	scanf("%i", &numero);
	for(c = 2; c <= numero; c += 2){
		printf("%i^2 = %li\n", c, c * c);
	}

	return 0;
}