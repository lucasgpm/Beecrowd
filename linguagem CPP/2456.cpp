#include <iostream>

int main(){
    short int cartas[5], carta_seg, cont = 0;

    for(short int aux = 0; aux < 5; aux++){
        std::cin >> cartas[aux];
    }

    for(short int i = 0; i < 5; i++){ 
        if(i != 4){
            carta_seg = cartas[i + 1];
        }
        if(cartas[i] < carta_seg && i != 4){
            cont--;
        }
        
        if(cartas[i] > carta_seg && i != 4){
            cont++;
        }
    }
    if(cont == -4){
        std::cout << "C\n";
    }

    if(cont == 4){
        std::cout << "D\n";
    }
    
    if(cont != 4 && cont != -4){
        std::cout << "N\n";
    }