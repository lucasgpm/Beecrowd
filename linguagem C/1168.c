#include <stdio.h>
#include <string.h>
//Lucas Gabriel, 20192004820
int main(){
	char led[1110];
	int cdt, aux, cont = 0, total = 0, aux2;
	scanf("%i", &cdt);
		for(aux = 0; aux < cdt; aux++){
			scanf("%s", led);
			for(aux2 = 0; aux2 < strlen(led); aux2++){
			if(led[cont] == '1'){
				total +=2;
			}
			if(led[cont] == '2'){
				total +=5;
			}
			if(led[cont] == '3'){
				total +=5;
			}
			if(led[cont] == '4'){
				total +=4;
			}
			if(led[cont] == '5'){
				total +=5;
			}
			if(led[cont] == '6'){
				total +=6;
			}
			if(led[cont] == '7'){
				total +=3;
			}
			if(led[cont] == '8'){
				total +=7;
			}
			if(led[cont] == '9'){
				total +=6;
			}
			if(led[cont] == '0'){
				total +=6;
			}
			cont++;
		}
		printf("%i leds\n", total);
		total = 0;
		cont = 0;
		}
		return 0;
}