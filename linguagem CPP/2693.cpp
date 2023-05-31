#include <bits/stdc++.h>

using namespace std;

/*  Nomes e Matriculas:
    João Vitor Lopes Fagundes, 20202006950
    Lucas Gabriel Pimenta Moreira, 20192004820
    Luís Felipe Teixeira Dias Brescia, 20202007607 */
    
// Struct aluno   
typedef struct {
	
	string nome;	// Nome do aluno
	char sigla;		// Região que ele mora
	int custo;		// Custo da entrada da cidade até sua casa
	
} alunos; 

int main() {

    // Declarando variáveis
	int Q;			// Quantidade de alunos
	int i, j;	    // Laço de repetição
	alunos aux;		// Ajudar na organização
	
	// Digita a quantidade de alunos
	while(scanf("%d", &Q) != EOF){
	
		// Cria um vetor to tipo alunos com essa quantidade
		alunos aluno[Q];
	
		// Digita os dados dos alunos
		for(i = 0; i < Q; i++){
			cin >> aluno[i].nome >> aluno[i].sigla >> aluno[i].custo;	
		}
	
		// Ordena por nome
		for(j = 0; j < Q; j++){
			for(i = 0; i < Q - 1; i++){
				if(aluno[i].nome[0] > aluno[i + 1].nome[0]){
			
					aux = aluno[i];
					aluno[i] = aluno[i + 1];
					aluno[i + 1] = aux;	
				}
			}
		}
	
		// Ordena por sigla
		for(j = 0; j < Q; j++){
			for(i = 0; i < Q - 1; i++){
				if(aluno[i].sigla > aluno[i + 1].sigla){
			
					aux = aluno[i];
					aluno[i] = aluno[i + 1];
					aluno[i + 1] = aux;	
				}
			}
		}
	
		// Ordena por custo
		for(j = 0; j < Q; j++){
			for(i = 0; i < Q - 1; i++){
				if(aluno[i].custo > aluno[i + 1].custo){
			
					aux = aluno[i];
					aluno[i] = aluno[i + 1];
					aluno[i + 1] = aux;	
				}
			}
		}
	
		// Depois que os vetor estiver organizado, basta printa-lo
		for(i = 0; i < Q; i++){
			
			cout << aluno[i].nome << endl;
		
		}
	}
	
	return 0;
}