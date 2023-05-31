#include <stdio.h>
#include <math.h>
#include <string.h>
//Lucas Gabriel, INF1A
int main(){
	double v[100], x;
	int c;
	scanf("%lf", &x);
	v[0] = x;
	printf("N[0] = %.4lf\n", x);
	for(c = 1; c < 100; c++){
		v[c] = v[c - 1] / 2;
		printf("N[%i] = %.4lf\n", c, v[c]);
	}


	return 0;
}