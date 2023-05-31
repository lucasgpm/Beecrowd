#include <bits/stdc++.h>

using namespace std;

/*  Nomes e Matriculas:
    João Vitor Lopes Fagundes, 20202006950
    Lucas Gabriel Pimenta Moreira, 20192004820
    Luís Felipe Teixeira Dias Brescia, 20202007607 */

unordered_map<string, int> distancia;
unordered_map<string, string> anterior;
vector<int> transitions[9] = {{3, 1}, {4, 2, 0}, {5, 1}, {0, 6, 4}, {1, 7, 5, 3}, {2, 8, 4}, {3, 7}, {4, 8, 6}, {5, 7}};

// O valor que o tabuleiro precisará estar ao final do jogo
const string resultado = "123456780";

// Busca em largura
int bfs(string source) {
    
    // Cria uma fila
	queue<string> q;
	
	distancia[source] = 1;
	
	q.push(source);
	
	// Enquanto estiver elementod na fila
	while( !q.empty() ) {
	    
		auto estado = q.front(); q.pop();

		if ( estado == resultado ){
		    return distancia[estado] - 1;    
		} 

		int posicao = estado.find('0');
		
		for ( auto& next_pos : transitions[posicao] ) {
		    
			auto next_state = estado;
			
			swap(next_state[posicao], next_state[next_pos]);
			
			if ( distancia[next_state] == 0 ) {
			    
				distancia[next_state] = distancia[estado] + 1;
				anterior[next_state] = estado;
				q.push(next_state);
				
			}
		}
	}
	return 0x3f3f3f3f;
}

void historico(string aux) {
    
    // Até o vetor estiver vazio
	if ( !anterior[aux].empty() ) {
	    
		historico(anterior[aux]);
		
		cout << "\n";
		
		int i = 0;
		
		for ( i = 0; i < 9; i++ ){
		    
		    // Imprime uma posição
		    cout << aux[i];
		    
		    // A cada 3 posições há uma quebra de linha
		    if ( ( i + 1 ) % 3 == 0 ){
		    	cout << "\n";
		    }
		}	    
	}
}

int main(void) {
    
    // Declarando variáveis
	char tabuleiro[10] {0}; // Tabuleiro inicializado com 0 em todas as posições
	int P;                  // Quantidade mínima de passos
	
	while ( ~scanf(" %c", &tabuleiro[0]) ){
		
		int i = 0;
		
		// Insere o tabuleiro
		for ( i = 1; i < 9; ++i ) {
			cin >> tabuleiro[i];
		}
	    
	    // Roda o algoritmo	
		P = bfs(tabuleiro);
		
		if ( P < 0x3f3f3f3f ) {
		    
			cout << "Quantidade minima de passos = " << P;
			
			// Printa o historico
			historico(resultado);
			
		} else {
		    
			cout << "Problema sem solucao\n";
			
		}
		
		distancia.clear();
		anterior.clear();
	}
	return 0;