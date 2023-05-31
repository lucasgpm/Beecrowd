#include <bits/stdc++.h>
using namespace std;

/*  Nomes e Matriculas:
    João Vitor Lopes Fagundes, 20202006950
    Lucas Gabriel Pimenta Moreira, 20192004820
    Luís Felipe Teixeira Dias Brescia, 20202007607 */

int main() {
    //declara variaveis
    char palavra[1000];
    short int cdt, aux, aux2, aux3, i, metade;
    
    //le quantos casos de teste são
    cin >> cdt;

    //Enquanto indice menor que casos de teste...
    for(i = 0; i < cdt; i++){
        //le as palavras
        if(i == 0){
            cin.ignore();
        }
        cin.getline(palavra, 1000);

        //Verifica se a palavra é par ou ímpar, pra atribuir a metade do tamanho da palavra pra variavel
        if(strlen(palavra) % 2 != 0){
            metade = strlen(palavra) / 2;
        }
        if(strlen(palavra) % 2 == 0){
            metade = strlen(palavra) / 2 - 1;
        }
        
        //enquanto auxiliar menor que quantidade de palavras do vetor... 
        for(aux = strlen(palavra) - 1; aux >= 0; aux--){
                //Verifica se é letra maiuscula ou minuscula
                if(palavra[aux] >= 97 && palavra[aux] <= 122 || palavra[aux] >= 65 && palavra[aux] <= 90 ){
                    palavra[aux] += 3;
                }
        }
        //enquanto auxiliar2 menor que a metade... 
        for(aux2 = 0; aux2 <= metade; aux2++){
            //Desloca uma casa pra esquerda (na tabela ASCII)
            palavra[aux2]--;
        }
        //enquanto auxiliar3 maior igual a 0...
        for(aux3 = strlen(palavra) - 1; aux3 >= 0; aux3--){
            //imprime palavra completa
            cout << palavra[aux3];
        }
        //quebra de linha
        cout << "\n";
    }

    return 0;
}