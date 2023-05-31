#include <bits/stdc++.h>

using namespace std;

/*  Nomes e Matriculas:
    João Vitor Lopes Fagundes, 20202006950
    Lucas Gabriel Pimenta Moreira, 20192004820
    Luís Felipe Teixeira Dias Brescia, 20202007607 */

vector<vector<int> > grafo(54000);		// Grafo
vector<bool> visitado(54000);			// Salva se o vértice foi visitado ou não

// Dfs é o nome de um algoritimo que percorre o grafo visitando cada vértice uma única vez
void dfs(int N){
	
	
    vector<int> ans;
    
    // Caso já tenha sido visitado sai da função
    if ( visitado[N] ){
        return;
    }
    
    // Marca o vértice como visitado
    visitado[N] = true;
    for ( auto e:grafo[N] ){
        dfs(e);
    }
    
    // Insere N no final do vetor
    ans.push_back(N);
    
    return;
}

int main() {
	
	// Declarando variáveis
    int M;				// Número de linhas
    int N;				// Indivíduos diferentes a serem analisados
    int i = 0;		    // Para o laço for
    int familias = 0;	// Quantidade de famílias
    while ( cin >> M >> N ){
		
		// Preenche toos os elementos do vetor visitado como false (não visitados)
        fill( visitado.begin(), visitado.end(), false );
        
        int a, b;
        
        // Executa N vezes, finaliza quando N chega em 0 == false
        while ( N-- ){
        	
        	// Usuário digita os dois indivíduos a serem comparados
            cin >> a >> b;
            
            // São inseridos no grafo
            grafo[a].push_back(b);
            grafo[b].push_back(a);
            
        }
        
        familias = 0;
        
        for ( i = 1; i <= M; i++ ){
           
		    /* 
				Caso algum vértice não tenha sido visitado (não tenha conexão com os outros)
            	significa que pertence a outra família
            */
            
			if ( !visitado[i] ){
                dfs(i);
                familias++;
            }
        }
        
        // Printa a saída
        cout << familias << endl;
    }
    
    return 0;
}