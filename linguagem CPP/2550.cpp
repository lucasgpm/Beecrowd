/*  Nomes e Matriculas:
    João Vitor Lopes Fagundes, 20202006950
    Lucas Gabriel Pimenta Moreira, 20192004820
    Luís Felipe Teixeira Dias Brescia, 20202007607 */

#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
int pai[1010], peso[1010];

int procura(int u) {
    while ( pai[u] != u ) u = pai[u];
    return u;
}

int main() {
	
	// Declarando Váriaveis
	int N;				// Número de prédios
    int M;				// Número de vias que podem ser construídas
	int cont;			// Contador
	int A, B;			// Liga os prédios
    
    while ( scanf("%d %d", &N, &M) != EOF ) {
        
        vector<iii> kruskal;
        
        for (int i = 0; i <= N; i++ ) {
            pai[i] = i;
            peso[i] = 1;
        }
		
		// Insere os dados das vias
        for (int i = 1; i <= M; i++ ) {
        	
            int peso;
            scanf("%d %d %d", &A, &B, &peso);
			
			// Dados da via são inseridos no grafo
            kruskal.push_back(make_pair(peso, make_pair( A, B)));
        }
		
		// Procura a ligação com o menor custo
        sort(kruskal.begin(), kruskal.end());
		
		// Igualamos o contador para rodar N vezes (número de prédios)
        cont = N;
        int C = 0;			// Custo dos prédios

        for (int i = 0; i < M; i++ ) {
        	
            A = procura( kruskal[i].second.first );
            B = procura( kruskal[i].second.second );
			
			// Sempre escolherá o caminho entre 2 vértices de menor peso
            if ( A != B ) {
                C += kruskal[i].first;
                if ( peso[B] > peso[A] ) {
                    pai[A] = B;
                } else if ( peso[B] < peso[A] ) {
                    pai[B] = A;
                } else {
                    peso[B]++;
                    pai[A] = B;
                }
                
                // Remove em 1, a quantidade de prédios erestantes
                cont--;
            }
        }

        if ( cont == 1 ){
            // Printa o custo
            cout << C << "\n";
        } else {
        	cout << "impossivel\n";
        }  
    }

    return 0;
}