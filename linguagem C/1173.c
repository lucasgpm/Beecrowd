#include <stdio.h>
#include <math.h>
#include <string.h>
//Lucas Gabriel, INF1A
int main(){
	int vet[10], aux, n;
	scanf("%i", &n);
	vet[0] = n;
	for(aux = 1; aux < 10; aux++){
			vet[aux] = vet[aux - 1] + vet[aux - 1];
		}
	for(aux = 0; aux < 10; aux++){
		printf("N[%i] = %i\n", aux, vet[aux]);
	}

	return 0;
}