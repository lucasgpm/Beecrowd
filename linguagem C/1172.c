#include <stdio.h>
#include <math.h>
#include <string.h>
//Lucas Gabriel, INF1A
int main(){
	int vet[10], aux;
	for(aux = 0; aux < 10; aux++){
		scanf("%i", &vet[aux]);
		if(vet[aux] == 0 || vet[aux] < 0){
			vet[aux] = 1;
		}
	}
	for(aux = 0; aux < 10; aux++){
		printf("X[%i] = %i\n", aux, vet[aux]);
	}

	return 0;
}