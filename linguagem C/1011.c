#include <stdio.h>
#include <math.h>

double main(){
	double pi = 3.14159, volume;
	float raio;
	scanf("%f", &raio);
	volume = 4 * pi * pow(raio, 3)/ 3.0;
	printf("VOLUME = %.3lf\n", volume);
}