#include<stdio.h>
#include<string.h>
//Lucas Gabriel, 20192004820
int main(){
char string1[50], string2[50];
int n, aux=0, aux2 = 0, maior = 0;
    scanf("%i",&n);
    for(aux = 0 ; aux < n; aux++){
        scanf("%s%s", string1, string2);
        if(strlen(string1) < strlen(string2)){ 
            maior = strlen(string2);
            }
        else {
            maior = strlen(string1);
            }
        
        for(aux2 = 0; aux2 < maior; aux2++){
            if(aux2 < strlen(string1)){
                printf("%c", string1[aux2]);
            }
            if(aux2 < strlen(string2)){
                printf("%c", string2[aux2]);
            }
        }
        printf("\n");
    }
}