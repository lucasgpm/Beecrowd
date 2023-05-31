#include <iostream>

int main(){
    short int l, c, il, ic;

    std::cin >> l >> c;

    short int tabuleiro[l][c];
    tabuleiro[0][0] = 1;

    //1, se for branca; e 0, se for preta

    for(il = 0; il < l; il++){
        for(ic = 0; ic < c; ic++){

            if(ic > 0 && tabuleiro[il][ic - 1] == 1){
                tabuleiro[il][ic] = 0;
            }
             if(ic > 0 && tabuleiro[il][ic - 1] == 0){
                tabuleiro[il][ic] = 1;
            }      
        }  

        if(tabuleiro[il -1][c] == 1){
            tabuleiro[il][ic] = 0;
        }
        if(tabuleiro[il -1][c] == 0){
            tabuleiro[il][ic] = 1;
        }
 }


    std::cout << tabuleiro[l - 1][c - 1] << "\n";
}