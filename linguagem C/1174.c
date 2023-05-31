#include <stdio.h>
#include <math.h>
#include <string.h>
//Lucas Gabriel, INF1A
int main(){
	double vet[100]; 
	int aux;
	for(aux = 0; aux < 100; aux++){
		scanf("%lf",&vet[aux]);
		}
	for(aux = 0; aux < 100; aux++){
		if(vet[aux] <= 10){
		printf("A[%i] = %.1lf\n", aux, vet[aux]);
	}
}

	return 0;
}