#include<stdio.h>
#include<string.h>
//Lucas Gabriel, 20192004820
int main(){
	int cdt, aux, aux2, x = 0, y = 0;
	char string[52], arm[52];
	scanf("%i", &cdt);
	for(aux2 = 0; aux2 < cdt; aux2++){
		getchar();
		scanf("%[^\n]s", string);
		for(aux = 0; aux < strlen(string); aux++){
			if(string[aux] != ' ' && x == 0){
				arm[y] = string[aux];
				x = 1;
				y++;
			}
			if(string[aux] == ' '){
				x = 0;
			}
		}
		arm[y] = '\0';
		printf("%s\n", arm);
		y = 0;
		x = 0;
}
    return 0;
}