#include <stdio.h>
#include <math.h>

int main(){
	int numero, c;
	scanf("%i", &numero);
	if(numero % 2 == 0){
		numero++;
	for(c = 0; c < 6; c++){
		printf("%i\n", numero);
		numero += 2;
	}
	}
	else{
		for(c = 0; c < 6; c++){
		printf("%i\n", numero);
		numero += 2;
	}
	return 0;
}
}