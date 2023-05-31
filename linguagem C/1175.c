#include <stdio.h>
#include <math.h>
#include <string.h>
//Lucas Gabriel, INF1A
int main(){
	int vet[20], aux, aux2, temp;
	for(aux = 0; aux < 20; aux++){
		scanf("%i",&vet[aux]);
		}
		for(aux = 0, aux2 = 19; aux < 10; aux++, aux2--){
			temp = vet[aux];
			vet[aux] = vet[aux2];
			vet[aux2] = temp;
	}

	for(aux = 0; aux < 20; aux++){
		printf("N[%i] = %i\n", aux, vet[aux]);
	}

	return 0;
}