#include <stdio.h>
#include <math.h>

int main(){
	int n, c = 0;
	float total, caso1, caso2, caso3, media;
	scanf("%i", &n);

	for(c = 0; c < n; c++){
		scanf("%f%f%f", &caso1, &caso2, &caso3);
		total = (caso1 * 2) + (caso2 * 3) + (caso3 * 5);
		printf("%.1f\n",total / 10);
	}

	return 0;
}