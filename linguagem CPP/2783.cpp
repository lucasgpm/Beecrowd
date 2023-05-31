#include <iostream>

int main(){
    //N - espacos do album, N - quantidade de figs carimbadas, N - quantidade de fig compradas
short int espacos, premiada, compradas;
std::cin >> espacos >> premiada >> compradas;
short int carimbadas[premiada], figs[compradas], repetidas[compradas], total = premiada; 

    for(short int i = 0; i < premiada; i++){
        std::cin >> carimbadas[i];
    }
    for(short int i = 0; i < compradas; i++){
        std::cin >> figs[i];
        repetidas[i] = figs[i];
    }


    for(short int i = 0; i < compradas; i++){
        for(short int j = 0; j < compradas; j++){
        
           if(i != j && figs[i] == repetidas[j]){
                repetidas[i] = 0;
            }
        
        }
    }
    for(short int i = 0; i < compradas; i++){
    for(short int j = 0; j < premiada; j++){
        if(carimbadas[j] == repetidas[i]){
            total--;
        }
    }
    }
    std::cout << total << "\n";
}

/*
10 2 5 4 7 7 1 2 8 3
10 2 6 4 7 7 1 8 4 9 3
8 4 10 2 4 6 8 3 1 1 5 1 1 7 7 1 1
----------------------------------
10 2 10 4 7 7 1 1 8 3 1 2 2 3 2
*/