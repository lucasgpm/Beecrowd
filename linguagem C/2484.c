#include <stdio.h>
#include <string.h>
//Lucas Gabriel, 20192004820
int main(){
	char v[102];
	int aux, i = 0, tamanho, espacos = 0, c;

	while(1){
		scanf("%s", &v);
		tamanho = strlen(v);
		while(tamanho != 0){
		for(aux = 0; aux < tamanho; aux++){
			if(aux < tamanho - 1){
			printf("%c ", v[i]);
			i++;
		}	
			if(aux == tamanho - 1){
				printf("%c", v[i]);
				printf("\n");
				espacos++;
				tamanho--;
				i = 0;
				if(aux != 0){
				for(c = 0; c < espacos; c++){
					printf(" ");
					}
				}	
			}	
		}
	}	
		espacos = 0;
		for(aux = 0; aux < 102; aux++){
			v[aux] = "0";
		}	

		if(scanf("%c", &v) == EOF){
			printf("\n");
			return 0;
		}
		else{
			printf("\n");
		}
	}
}