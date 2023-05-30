#include <stdio.h>
#include <math.h>
//Lucas gabriel, INF1A
int main(){
	int a, b, c;
	scanf("%i%i%i", &a, &b, &c);
	if(a > b && a > c){
		printf("%i eh o maior\n", a);
	}
	if(b > a && b > c){
		printf("%i eh o maior\n", b);
	}
	if(c > b && c > a){
		printf("%i eh o maior\n", c);
	}
	return 0;
	//EU NÃO ENTENDI A FORMULA, POR ISSO FIZ ASSIM!
}