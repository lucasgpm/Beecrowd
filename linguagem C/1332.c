#include <stdio.h>
#include <string.h>
//Lucas Gabriel, 20192004820
int main(){
	char palavra[7];
	int cdt, c, i, one = 0, two = 0, three = 0;
	scanf("%i", &cdt);
	for(i = 0; i < cdt; i++){
		scanf("%s", palavra);
		for(c = 0; c < strlen(palavra); c++){
			if(palavra[c] == 'o' && palavra[c + 1] == 'n' || palavra[c] == 'o' && palavra[c + 2] == 'e' || palavra[c] == 'n' && palavra[c + 1] == 'e'){
				one++;
			}
			if(palavra[c] == 't' && palavra[c + 1] == 'w' || palavra[c] == 't' && palavra[c + 2] == 'o' || palavra[c] == 'w' && palavra[c + 1] == 'o'){
				two++;
			}
			else{
				three++;
			}
		}
		if(strlen(palavra) == 3 && one >= 1){
			printf("1\n");
		}
		if(strlen(palavra) == 3 && two >= 1){
			printf("2\n");
		}
		if(strlen(palavra) == 5 && three >= 1){
			printf("3\n");
		}
		one = 0;
		two = 0;
		three = 0;
		for(c = 0; c < strlen(palavra); c++){
			palavra[c] = "0";
		}
	}
	return 0;
}