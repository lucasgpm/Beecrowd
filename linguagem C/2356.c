#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Lucas Gabriel, 20192004820
int main(){
  char string1[122],string2[122], arm[122];
  int aux, aux2, x, v;
  while(scanf("%s%s", string1, string2)!=EOF){
     for(aux = 0; aux < strlen(string1); aux++){
   		for(aux2 = 0, x = aux; aux2 < strlen(string1); aux2++, x++){
     		arm[aux2] = string1[x];
   }
      arm[aux2] = '\0';
      if(strncmp(string2, arm, strlen(string2)) == 0){
        v = 1;
        break;
      }
        else{
          v = 0;
        }
      }
      if(v == 1){
      printf("Resistente\n");
      }
      else{
      printf("Nao resistente\n");
    }
    v = 0;
    }
  return 0;
}