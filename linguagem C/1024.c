#include <stdio.h>
#include <string.h>
#include <ctype.h>
//Lucas Gabriel, 20192004820
	int main(){
		int t, i, j, l, k, tam, m, cont, met;
		char string[1100];	
		scanf("%i", &t);
		for(i = 0; i < t; i++){
			getchar();
 			scanf("%[^\n]s", string);
 			tam = strlen(string);
 		if(strlen(string) % 2 == 0){
 			met = strlen(string)/2 - 1;
 		}
 		if(tam % 2 != 0){
 			met = strlen(string)/2;
 		}
 		for(j = 0; j < strlen(string); j++){
 		if(isalpha(string[j])){
    	string[j] = string[j] + 3;
 		}
 	}
 		for(m=0; m <= met; m++){
    	string[m]--;
  	}
    for(cont = tam - 1; cont >=0; cont--)
    {
        printf("%c", string[cont]);
    }
printf("\n");
 }
return 0;
}