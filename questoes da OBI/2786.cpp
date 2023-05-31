#include <iostream>

int main(){
    short int larg, comp;
    short int tipo1, tipo2;

    std::cin >> larg >> comp;

    tipo1 = (comp * larg) + ((comp - 1) * (larg - 1));
    tipo2 = ((comp - 1) * 2) + ((larg - 1) * 2);

    std::cout << tipo1 << "\n";
    std::cout << tipo2 << "\n";
}