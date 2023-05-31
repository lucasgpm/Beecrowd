#include <stdio.h>
#include <math.h>
#include <string.h>
//Lucas Gabriel, INF1A
int main(){
	int entrada, c, l;
	float m[12][12];
	char v[2], soma[] = "S", media[] = "M";
	double total = 0;
	scanf("%i%s", &entrada, &v);
	for(l = 0; l < 12; l++){
	for(c = 0; c < 12; c++){
		scanf("%f", &m[l][c]);
		}
	}
	if(strcmp(v, soma) == 0){
	for(l = 0; l < 12; l++){
		total += m[l][entrada];
		if(l == 11){
			printf("%lf\n", total);
		}
	}
}
	if(strcmp(v, media) == 0){
	for(l = 0; l < 12; l++){
		total += m[l][entrada];
		if(l == 11){
			printf("%.1lf\n", total / 12);
		}
	}
}

	return 0;
}