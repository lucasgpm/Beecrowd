#include <stdio.h>
#include <math.h>

int main(){
	int x, y, total = 0;
	scanf("%i%i", &x, &y);
	if(x < y){
		x++;
		while(x < y){
			if(x % 2 != 0){
				total +=x;
			}
			x++;
		}
	}
	else{
		y++;
		while(y<x){
			if(y % 2 != 0){
				total += y;
			}
			y++;
		}
	}
	printf("%i\n", total);

	return 0;
}