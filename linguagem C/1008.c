#include <stdio.h>
#include <math.h>

float main(){
	int n, ht;
	float din, total;
	scanf("%i%i%f", &n, &ht, &din);
	printf("NUMBER = %i\n", n);
	total = din * ht;
	printf("SALARY = U$ %.2f\n", total);
}