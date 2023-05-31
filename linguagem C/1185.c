#include <stdio.h>
#include <math.h>
#include <string.h>
//Lucas Gabriel, INF1A
int main(){
	char ent[2], soma[]= "S", media[] = "M";
	int l, c, aux = 12, prgc = 0;
	float m[12][12];
	double total = 0;
	scanf("%s", &ent);
	for(l = 0; l < 12; l++){
		for(c = 0; c < 12; c++){
			scanf("%f", &m[l][c]);
		}
	}
	for(l = 0; l < 11; l++){
		aux--;
		for(c = 0; c < aux; c++){
			total += m[l][c];
			prgc++;
		}
	}
	if(strcmp(ent, soma) == 0){
		printf("%.1lf\n", total);
	}
	if(strcmp(ent, media) == 0){
		printf("%.1lf\n", total / prgc);
	}

	return 0;
}