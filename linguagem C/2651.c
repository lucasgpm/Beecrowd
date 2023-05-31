#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Victor Wilson Medeiros da Silva
//Caeté
//Isaac Portela
//Lucas Gabriel

int main(){
  char nome[1000002];
  int tamanho;
  int i;
  int verifica=0;

  scanf("%s",nome);


  tamanho = strlen(nome);

  for(i=0;i<tamanho;i++){

    if(nome[i]=='Z' || nome[i]=='z'){
      if(nome[i+1]=='E' || nome[i+1]=='e'){
        if(nome[i+2]=='l' || nome[i+2]=='L'){

          if(nome[i+3]=='d' || nome[i+3]=='D'){
            if(nome[i+4]=='a' || nome[i+4]=='A'){
              printf("Link Bolado\n");
              verifica  = 1;
            }
          }

        }
      }
    }


  }
    if(verifica==0)
    printf("Link Tranquilo\n");


  return 0;
}
