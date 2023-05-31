#include <stdio.h>
#include <string.h>
//Lucas Gabriel, 20192004820
int main(){
	int aux, i = 0, auxc, total = 0;
	char palavra[52], vogal[52];
	gets(palavra);
	for(aux = 0; aux < strlen(palavra); aux++){
		if(palavra[aux] == 97 || palavra[aux] == 101 || palavra[aux] == 105 || palavra[aux] == 111 || palavra[aux] == 117){
			vogal[i] = palavra[aux];
			i++;
		}
	}
	vogal[i] = '\0';
	auxc = strlen(vogal) - 1;
	for(aux = 0; aux < strlen(vogal); aux++){
		if(vogal[aux] == vogal[auxc]){
			total++;
		}
	auxc--;
	}
	if(total == strlen(vogal)){
		printf("S\n");
	}
	else{
		printf("N\n");
	}
	return 0;
}