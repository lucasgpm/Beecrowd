#include <iostream>

int main(){
    short int aposta[6], sorteio[6];
    short int total = 0;

    for(short int i = 0; i < 6; i++){
        std::cin >> aposta[i];
    }
    for(short int i = 0; i < 6; i++){
        std::cin >> sorteio[i];
    }
    for(short int i = 0; i < 6; i++){
        for(short int aux = 0; aux < 6; aux++){     
            if(aposta[i] == sorteio[aux]){
                total++;
            }
        }
    }
    switch(total){
        case 3:
        std::cout << "terno\n";
        break;
        case 4:
        std::cout << "quadra\n";
        break;
        case 5:
        std::cout << "quina\n";
        break;
        case 6:
        std::cout << "sena\n";
        break;
        default:
        std::cout << "azar\n";
    }
    return 0;
}