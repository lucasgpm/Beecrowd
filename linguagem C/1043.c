#include <stdio.h>
#include <math.h>

double main(){
	double a,b,c;
	scanf("%lf%lf%lf", &a,&b,&c);
	if(a > b - c && a < b + c && b > a - c && b < a + c && c > a - b && c < b + a){
		printf("Perimetro = %.1lf\n", a + b + c);
	}
	else{
		printf("Area = %.1lf\n", (a + b) * c / 2);
	}

	return 0;
}