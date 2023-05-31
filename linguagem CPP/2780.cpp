#include <iostream>

int main(){
    short int dis, cesta = 0;

    std::cin >> dis;

    if(dis <= 800){
        cesta = 1;
    }
    if(dis > 800 && dis <= 1400){
        cesta = 2;
    }
    if(dis > 1400 && dis <= 2000){
        cesta = 3;
    }

    std::cout << cesta << "\n";
}