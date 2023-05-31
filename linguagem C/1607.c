#include <stdio.h>
#include <string.h>
//Lucas Gabriel, 20192004820
int main(){
	int cdt, aux, aux2, total = 0;
	char a[10002], b[10002];
	scanf("%i", &cdt);
	for(aux = 0; aux < cdt; aux++){
		scanf("%s%s", &a, &b);
		for(aux2 = 0; aux2 < strlen(b); aux2++){
		if(a[aux2] > b[aux2] && a[aux2]){
			total += ('z' - a[aux2]) + (b[aux2] - 'a') + 1;
		}
		if(a[aux2] < b[aux2]){
			total += b[aux2] - a[aux2];
		}
	}
		printf("%i\n", total);
		total = 0;
		for(aux2 = 0; aux2 < strlen(b); aux2++){
			a[aux2] = "0";
			b[aux2] = "0";
		}
	}
	
return 0;
}