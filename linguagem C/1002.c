#include <stdio.h>
#include <math.h>

double main(){
	double pi = 3.14159, raio; 
	double area;
	scanf("%lf", &raio);
	area = pi * pow(raio, 2);
	printf("A=%.4lf\n", area);
	return 0;
}