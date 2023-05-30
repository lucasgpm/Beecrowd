#include <stdio.h>
#include <math.h>
//Lucas gabriel, INF1A
int main(){
	int idade, anos, meses; 
	scanf("%i", &idade);
	anos = idade / 365;
	idade -= anos * 365;
	printf("%i ano(s)\n", anos);
	meses = idade / 30;
	idade -= meses * 30;
	printf("%i mes(es)\n", meses);
	printf("%i dia(s)\n", idade);
	return 0;
}