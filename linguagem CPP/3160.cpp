#include <bits/stdc++.h>

using namespace std;

/*  Nomes e Matriculas:
    João Vitor Lopes Fagundes, 20202006950
    Lucas Gabriel Pimenta Moreira, 20192004820
    Luís Felipe Teixeira Dias Brescia, 20202007607 */

int main() {
    
    // getline(cin, lista[i][j]);
    
    // Declarando variáveis
    string listaAntiga;       // Lista de amigos antiga
    string listaNova;         // Lista de amigos nova
    string busca;             // Ler o valor antes de inseri-lo
    int i = 0, j = 0;         // Laço de repetição
    int aux = 0;              // Valor guardado
    int temp = 0;             // Posição do primeiro char
    
    // Insere lista antiga
    getline(cin, listaAntiga);
    
    // Insere lisa nova
    getline(cin, listaNova);
    
    // Insere string de busca
    cin >> busca;
    
    // Percorre a lista antiga procurando a palavra busca
    for ( int i = 0; i < listaAntiga.size(); i++ ) {
        
        // Zera o aux
        aux = 0;
        
        // Caso ache o caracter da palavra buscada
        if (listaAntiga[i] == busca[0] ){
            
            // Percorre as n letras em diante, para verificar se a palavra é24 a mesma
            for ( j = 0; j < busca.size(); j++ ) {
                
                // Caso todas as letras do aux coincidam
                if(listaAntiga[i + j] == busca[j]){
                    aux++;
                    
                    // Aux terá o mesmo valor da busca
                    if(aux == busca.size()){
                        
                        // O valor de i é guardado em outra variável
                        temp = i;
                        
                        break;
                    }
                }
            }    
        }
    }
    
    // Caso não tenha palavra busca, apenas imprime os vetores
    if ( busca == "nao" ){
        cout << listaAntiga << " " << listaNova << endl;
    } else {
        
        // Imprime a string antes de encontrar a palavra busca   
        for(i = 0; i < temp; i++){
            cout << listaAntiga[i];
        }
    
        cout << listaNova << " ";
        
        // Imprime a string depois de encontrar a palavra busca
        for(i = temp; i < listaAntiga.size(); i++){
            cout << listaAntiga[i];
        }
    
        cout << endl;
    } 
    
    // Retorna 0
    return 0;
}