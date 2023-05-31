#include <stdio.h>
#include <string.h>
//Lucas Gabriel, 20192004820
int main(){
	char senha[50];
	int aux, exig1 = 0, exig2 = 0, exig3 = 0, exig4 = 0;
	 getchar();
 	 while(scanf("%[^\n]s",senha)!=EOF){
   	 getchar();		
   		 for(aux = 0; aux < strlen(senha); aux++){
			if(senha[aux] > 64 && senha[aux] < 91){
				exig1++;
			}
			if(senha[aux] > 47 && senha[aux] < 58){
				exig2++;
			}
			if(senha[aux] > 96 && senha[aux] < 123){
				exig3++;
			}
			if(senha[aux] > 57 &&senha[aux] < 65 || senha[aux] > 90 && senha[aux] < 97 || senha[aux] > 122 || senha[aux] < 47){
				exig4++;
			}
		}
		if(exig1 != 0 && exig2 != 0 && exig3 != 0 && exig4 == 0 && strlen(senha) >= 6 && strlen(senha) <= 32){
			printf("Senha valida.\n");
		}
		else{
			printf("Senha invalida.\n");
		}
		exig1 = 0;
		exig2 = 0;
		exig3 = 0;
		exig4 = 0;
}
	return 0;
}