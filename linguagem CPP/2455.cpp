#include <iostream>

int main(){
    short int peso1, comp1, peso2, comp2;
    short int resultado1, resultado2;

    std::cin >> peso1 >> comp1 >> peso2 >> comp2;

    resultado1 = peso1 * comp1;
    resultado2 = peso2 * comp2;

    if(resultado1 == resultado2){
        std::cout << "0" << "\n"; 
    }
    if(resultado1 > resultado2){
        std::cout << "-1" << "\n"; 
    }
    if(resultado1 < resultado2){
        std::cout << "1" << "\n"; 
    }

    return 0;
}