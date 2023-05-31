#include <stdio.h>
#include <math.h>

long int main(){
	int n, c = 0;
	scanf("%i", &n);
	for(c = 1; c < 10000; c++){
		if(c % n == 2){
			printf("%i\n",c);
		}
	}
	
	return 0;
}