#include <stdio.h>
#include <string.h>
#include <math.h>
//Lucas Gabriel, INF1A
int main(){
	long long int decimal, a;
	int num, c = 0, bin[61];
	char limpadorbuff;
	char painel;
	scanf("%i%c", &num, &limpadorbuff);
	while(num--){
    	decimal = 0;
    	c = 0;
    while(1){
    	scanf("%c", &painel);
    	if(painel == 'X') bin[c] = 0;
    	else if(painel =='O') bin[c] = 1;
    	else break;
    	c++;
    }
    bin[c] = 2;
    scanf("%lli%c", &a, &limpadorbuff);
    	c = 0;
    while(bin[c]!=2){
     	decimal += pow(2, c) * bin[c];
      	c++;
    }
    	decimal += a;
    while(c--){
     	if(decimal % 2 == 1){
			printf("O");
		}
    	if(decimal % 2 == 0){
    		printf("X");
     	}
     	decimal /= 2;
    }
    printf("\n");
    }
    return 0;
}