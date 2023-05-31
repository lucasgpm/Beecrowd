#include <bits/stdc++.h>

using namespace std;

/*  Nomes e Matriculas:
    João Vitor Lopes Fagundes, 20202006950
    Lucas Gabriel Pimenta Moreira, 20192004820
    Luís Felipe Teixeira Dias Brescia, 20202007607 */

double grafo [101][101]; // Criando um vetor para a estrutura de dados
 
void floydwarshall(int N) {
	
    int k = 0;		  // Vértice inicial 
	int i = 0, j = 0; // Vértices subsequentes
	
	// Percorre os vértices
	for ( k = 0; k < N; k++ ) {
		for ( i = 0; i < N; i++ ) {
			for ( j = 0; j < N; j++ ) {	
				// Caso a aresta seja maior que o vértice
				if (grafo[i][k] * grafo[k][j] > grafo[i][j] && grafo[i][k] && grafo[k][j]){
					grafo[i][j] = grafo[i][k] * grafo[k][j];	
				}			
			}
		}
	}
}

int main() {
	
	// Declarando Variáveis
	int N;		 // Interseções
	int M;		 // Quantidade de ruas
	int a, b;	 // Pontos finais da rua
	double p;	 // Probabilidade deles serem pegos
	int i, j;	 // Para o laço for

	while ( N && scanf("%d%d", &N, &M) == 2 ) {
		
		// Cria o grafo com todos seus valores sendo iguais a 0.0
		memset( grafo, 0.0, sizeof(grafo) );
		
		// Insere os dados de cada rua
		for ( i = 0; i < M; i++ ) {
			cin >> a >> b >> p;
			grafo[a - 1][b - 1] = grafo[b - 1][a - 1] = 0.01 * p;	// Transforma em porcentagem
		}
		
		// Chama a função para calcular a rota mais segura
		floydwarshall(N);
		
		// Imprime a saída com a precisão de 6 digítos
		cout << fixed << setprecision(6) << grafo[0][N - 1] * 100 << " percent\n";
	}
	
	return 0;
}