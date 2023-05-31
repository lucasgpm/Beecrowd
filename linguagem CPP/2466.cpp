#include <iostream>

int main(){
    int n;
    std::cin >> n;
    short int triangulo[n][n];


    for(short int l = 0; l < n; l++){
        for(short int c = 0; c < n; c++){
            triangulo[l][c] = 0;
        }
    }

    for(short int l = 0; l < n; l++){
        for(short int c = 0; c < n; c++){
            if(l == 0){
            std::cin >> triangulo[l][c] ; 
            }
            if(triangulo[l - 1][c] + triangulo[l - 1][c + 1] == 0 && l > 0 && c != n - 1){
                triangulo[l][c] = 1;
            }
            else if(triangulo[l - 1][c] + triangulo[l - 1][c + 1] != 0 && l > 0 && c != n - 1){
                triangulo[l][c] = -1;
            }
        }
    }
    if(triangulo[n - 1][0] == -1){
        std::cout << "preta"<<"\n";
    }
    if(triangulo[n - 1][0] == 1){
        std::cout << "branca"<<"\n";
    }
// 5 1 -1 1 1 -1
// 8 1 -1 -1 1 -1 1 1 -1