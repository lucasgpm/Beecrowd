#include <stdio.h>
#include <math.h>
//Lucas gabriel, INF1A
float main(){
	int horas, km_h;
	float total;
	scanf("%i%i", &horas,&km_h);
	total = horas * km_h;
	printf("%.3f\n", total / 12);
	return 0;
}