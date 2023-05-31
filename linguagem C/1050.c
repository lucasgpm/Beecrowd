#include <stdio.h>
#include <math.h>
#include <string.h>
//Lucas Gabriel, INF1A
int main(){
	int m;
	scanf("%i", &m);
	if(m == 61){
		printf("Brasilia\n");
	}
	if(m == 71){
		printf("Salvador\n");
	}
	if(m == 11){
		printf("Sao Paulo\n");
	}
	if(m == 21){
		printf("Rio de Janeiro\n");
	}
	if(m == 32){
		printf("Juiz de Fora\n");
	}
	if(m == 19){
		printf("Campinas\n");
	}
	if(m == 27){
		printf("Vitoria\n");
	}
	if(m == 31){
		printf("Belo Horizonte\n");
			}
	if(m != 61 && m != 71 && m != 11 && m != 21 && m != 32 && m != 19 && m != 27 && m != 31){
	printf("DDD nao cadastrado\n");
		}


	return 0;
}