#include <iostream>

using std::cin;
using std::cout;

int main() {
    
    long long int l, n;
  
    cin >> l >> n;

    long long int total = l - (n - 1);
    cout << (n - 1) + total * total << "\n";

    return 0;

}
     /* 
     Entrada: 10 5 
     Saida: 40
        5 numeros ao somados tem que dar 10
        os 5 maiores quadrados somando 10 são a maior area
        1000000 9
     */