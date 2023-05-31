#include <stdio.h>
#include <math.h>
#include <string.h>
//Lucas Gabriel, INF1A
int main(){
	char ent[2], soma[]= "S", media[] = "M";
	int l, c, aux = 0;
	float m[12][12];
	double total = 0;
	scanf("%s", ent);
	if(strcmp(ent, soma) == 0){
	for(l = 0; l < 12; l++){
		for(c = 0; c < 12; c++){
			scanf("%f", &m[l][c]);
			if(l > c){
				total += m[l][c];
			}
		}
	}
	printf("%.1lf\n", total);
}
	if(strcmp(ent, media) == 0){
	for(l = 0; l < 12; l++){
		for(c = 0; c < 12; c++){
			scanf("%f", &m[l][c]);
			if(l > c){
				aux++;
				total += m[l][c];
			}
		}
	}
	printf("%.1lf\n", total / aux);
}

	return 0;
}