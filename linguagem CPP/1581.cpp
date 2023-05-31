#include <bits/stdc++.h>

using namespace std;

/*  Nomes e Matriculas:
    João Vitor Lopes Fagundes, 20202006950
    Lucas Gabriel Pimenta Moreira, 20192004820
    Luís Felipe Teixeira Dias Brescia, 20202007607 */

int main() {

    // Declarando variáveis
    int N;                // Casos teste 
    int K;                // Pessoas de cada caso teste
    int i, j, k, l;       // Laço de repetição
    int aux = 0;          // Verifica se há alguma palavra diferente

    // Digita o número de casos teste
    cin >> N;

    // Roda os casos teste
    for ( l = 0; l < N; l++ ){

        // Número de pessoas do caso teste (entre 2 e 100)
        do {
            cin >> K;
        } while ( K < 2 || K > 100 );

        // Roda as pessoas do caso teste
        for ( i = 0; i < K; i++ ){

            // Vetor que contém as línguas nativas do caso teste
            string linguas[100];

            // Digita a língua nativa de cada uma
            for ( i = 0; i < K; i++ ){
                cin >> linguas[i];
            }

            // Compara as línguas nativas
            for ( i = 0; i < K; i++ ){
                for ( j = K; j > i + 1; j-- ){

                    // Caso as línguas sejam diferentes aumentam aux em 1
                    if ( linguas[i].compare(linguas[j - 1]) != 0 ){
                        aux++;
                        //cout << "comparado\n";
                    }
                }
            }

            // Comparando se há linguas nativas diferentes
            if ( aux == 0 ){

                // Caso todos os participantes falem a mesma língua, ela será o idioma adequado
                cout << linguas[0] << endl;

            } else {

                // Caso haja línguas diferentes, inglês será o idioma adequado
                cout << "ingles" << endl;
            }

            // Sempre que um caso de teste é finalizado, a variável aux volta para 0
            aux = 0;
        }
    }

    return 0;
}