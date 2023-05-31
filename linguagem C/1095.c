#include <stdio.h>
#include <math.h>
//Lucas Gabriel, INF1A
int main(){
	int numero = 60, numero2 = 1, c = 0;
	for(c = 0; c <= 12; c++){
		printf("I=%i J=%i\n", numero2, numero);
		numero -= 5;
		numero2 += 3;
	}
	
	return 0;
}