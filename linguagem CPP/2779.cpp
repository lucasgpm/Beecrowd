#include <iostream>

int main(){
    short int tamanho, qtd, fig[500], repetida[500], resultado = 0, album = 0;
    short int i, aux;

    std::cin >> tamanho >> qtd;

     for(i == 0; i < qtd; i++){
        std::cin >> fig[i];
        repetida[i] = fig[i];
    }

     for(aux = 0; aux < qtd; aux++){
        for(i = 0; i < qtd; i++){
            if(i != aux && repetida[aux] == fig[i]){
                repetida[i] = 0;
            }
        }
    }
    
     for(i = 0; i < qtd; i++){
         if(repetida[i] != 0){
             album++;
         }
    }

    resultado = tamanho - album;

    std::cout << resultado << "\n";

    return 0;
}