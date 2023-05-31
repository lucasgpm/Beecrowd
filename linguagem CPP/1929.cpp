#include <iostream>
using std::cin;
using std::cout;

int main(){

    //Lados do triangulo
    short int a,b,c,d;
        cin >> a>>b>>c>>d;
    //a
    if(a + b > c && a + c > b && b + c > a){
        cout << "S\n";
        return 0;
    }
    if(a + b > d && a + d > b && b + d > a){
        cout << "S\n";
        return 0;
    }
    if(a + c > d && a + d > c && c + d > a){
        cout << "S\n";
        return 0;
    }
    //termino a

    //b
    if(c + b > d && b + d > c && c + d > b){
        cout << "S\n";
        return 0;
    }
    //termino b
        cout << "N\n";
    
}
/*
6 9 22 15
14 40 12 60
*/