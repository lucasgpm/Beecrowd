#include <bits/stdc++.h>

using namespace std;

/*  Nomes e Matriculas:
    João Vitor Lopes Fagundes, 20202006950
    Lucas Gabriel Pimenta Moreira, 20192004820
    Luís Felipe Teixeira Dias Brescia, 20202007607 */

int main() {

    // Declarando variáveis
    int N;				// Casos testes
    int i, j, k, l;		// Laço de repetição
    int diamantes;		// Guarda o número de diamantes
    string mina;	    // Mina
	
	// Digita quantidade de casos teste
    cin >> N;

	// Roda casos teste
    for (l = 0; l < N; l++){
		
		// Zeramos a variável diamantes sempre que iniciamos um caso teste
		diamantes = 0;
		
		// Desenha a mina
		cin >> mina;
		
		// Percorre a string mina
		for(k = 0; k < mina.size() - 1; k++){	
			
			// Se o diamante for aberto...	
			if(mina[k] == '<'){
				
				// A mina é percorrida... 
				for(j = k; j < mina.size() - 1; j++){
					
					// Até seu par ser encontrado...
					if(mina[j + 1] == '>'){
						
						// Suas antigas posições viram areia...	
						mina[k] = '.';
						mina[j + 1] = '.';
						
						// E suas entradas, um diamante...
						diamantes++;
						
						// Após seu encontro, a busca acaba..
						break;
					}	
				}		
			}
		}
		
		// Número de diamantes que encontraram o seu par
		cout << diamantes << endl;
    }

    return 0;
}