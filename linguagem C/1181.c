#include <stdio.h>
#include <math.h>
#include <string.h>
//Lucas Gabriel, INF1A
int main(){
	int linha, c, l;
	float m[12][12];
	double total = 0;
	char t[2], soma[] = "S", media[] = "M";
	scanf("%i%s", &linha, &t);
	for(l = 0; l < 12; l++){
		for(c = 0; c < 12; c++){
			scanf("%f", &m[l][c]);
		}
	}
	for(c = 0; c < 12; c++){
		total += m[linha][c];
	}
	if(strcmp(t,soma) == 0){
	printf("%lf\n", total);
	}
	if(strcmp(t,media) == 0){
	printf("%.1lf\n", total / 12);
	}

	return 0;
}