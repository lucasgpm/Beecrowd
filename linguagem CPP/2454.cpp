#include <iostream>

int main(){
    short int p, r;
    char resultado;
    
    std::cin >> p >> r;

    if(p == 0){
        resultado = 'C'; 
    }
    if(p == 1 && r == 0){
        resultado = 'B';
    }
    if(p == 1 && r == 1){
        resultado = 'A'; 
    }
    
    std::cout << resultado << "\n";
    
    return 0;
}