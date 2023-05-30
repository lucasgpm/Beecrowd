#include <stdio.h>
#include <math.h>

float main(){
	float a, b, c, media;
	scanf("%f%f%f", &a, &b, &c);
	media = a * 2 + b * 3 + c * 5;
	printf("MEDIA = %.1f\n", media/10);
	return 0;
}