#include <bits/stdc++.h>

using namespace::std;

int main(){

    int valor, parcelas, i = 0;
    float resto;

    cin >> valor >> parcelas;
    resto = valor % parcelas;

        if(resto != 0){
            for(i = 0; i < parcelas; i++){
                if(i < resto){
                    cout << (valor / parcelas) + 1 << "\n";
                }
                else{
                    cout << valor / parcelas << "\n";
                }
            }
        }
        else{
            for(i = 0; i < parcelas; i++){
            cout << valor / parcelas << "\n";
            }
        }

    return 0;
}