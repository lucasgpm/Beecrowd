#include <stdio.h>
#include <math.h>
#include <string.h>
//Lucas Gabriel, INF1A
int main(){
	int casos, c = 0, total = 0, quantia = 0; 
	int quantiac= 0, quantiar = 0, quantias = 0;
	float totc = 0.0, totr = 0.0, tots = 0.0, totq = 0.0;
	char crs[2], coelhos[] = "C", ratos[] = "R", sapos[] = "S";
	scanf("%i", &casos);
	for(c = 0; c < casos; c++){
		scanf("%i%s", &quantia,&crs);
		total += quantia;
		if(strcmp(crs, coelhos) == 0){
		quantiac += quantia;
		}
		if(strcmp(crs, ratos) == 0){
		quantiar += quantia;
		}
		if(strcmp(crs, sapos) == 0){
		quantias += quantia;
		}
		totq += quantia;
	}
	totc = quantiac  * 100;
	totr = quantiar  * 100;
	tots = quantias  * 100;
	printf("Total: %i cobaias\n", total);
	printf("Total de coelhos: %i\n", quantiac);
	printf("Total de ratos: %i\n", quantiar);
	printf("Total de sapos: %i\n", quantias);
	printf("Percentual de coelhos: %.2f %%\n", totc / totq);
	printf("Percentual de ratos: %.2f %%\n", totr / totq);
	printf("Percentual de sapos: %.2f %%\n", tots / totq);

	return 0;
}