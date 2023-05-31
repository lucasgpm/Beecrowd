#include <iostream>

int main(){
    short int n, temp = 0, comida_max = 0;
    std::cin >> n;
    char tabuleiro[n][n];

    for(short int aux01 = 0; aux01 < n; aux01++){
        for(short int aux02 = 0; aux02 < n; aux02++){
            std::cin >> tabuleiro[aux01][aux02];
    }
}

    for(short int l = 0; l < n; l++){
        
       if(l % 2 == 0){

        for(short int c = 0; c < n; c++){    
           
            
            if(tabuleiro[l][c] == 'o'){
                temp++;
            }       
            if(tabuleiro[l][c] == 'A'){
                if(temp > comida_max){
                    comida_max = temp;
                }
                temp = 0;
            } 

        }
    }

        if(l % 2 != 0){

        for(short int c = n - 1; c >= 0; c--){
            
            
            if(tabuleiro[l][c] == 'o'){
                temp++;
            }
            if(tabuleiro[l][c] == 'A'){
                if(temp > comida_max){
                    comida_max = temp;
                }
                temp = 0;
            }

        }
    }
    }
    if(temp > comida_max){
        comida_max = temp;
    }
    std::cout << comida_max << "\n";

    return 0;
}

/*5 . o o o . . . o o A . . A o o A o o o o . . o o o
3 . o . o A A o o o

5 
. o o o . 
. . o o A 
. . A o o 
A o o o o 
. . o o o
*/