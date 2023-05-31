#include <stdio.h>
#include <math.h>
#include <string.h>
//Lucas Gabriel, INF1A
int main(){
	int n;
	scanf("%i", &n);
	int v[n], c, aux = 0;
	int menor = 0;
	int pos;
	for(c = 0; c < n; c++){
		scanf("%i", &v[c]);
	}
	for(c = 1; c < n; c++){
		if(v[c] < menor){
		menor = v[c];
		pos = c ;
		
		}
	}
		printf("Menor valor: %i\n",menor);
		printf("Posicao: %i\n",pos);
	return 0;
}