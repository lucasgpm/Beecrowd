#include <bits/stdc++.h>

using namespace std;

/*  Nomes e Matriculas:
    João Vitor Lopes Fagundes, 20202006950
    Lucas Gabriel Pimenta Moreira, 20192004820
    Lucas Felipe Teixeira Dias Brescia, 20202007607 */

// Uma estrutura para representar uma aresta com peso no grafo.
struct Edge {  
    int src, dest, peso;  
};  
  
// Estrutura para representar um grafo conexo, não orientado e com peso entre arestas.
struct Grafo {

    int V; // Número de vértices
    int E; // Número de arestas
    
    // O grafo é representado como um array de arestas.
    // Sendo o grafo não orientado, a aresta que vai de src á dest e também a aresta de dest para src.
    // Ambas são contadas como apenas uma aresta.
    Edge* edge;  
};  
    
// Cria um grafo com V vértices e E arestas.
Grafo* creategrafo(int V, int E) {  
    Grafo* grafo = new Grafo;  
    (*grafo).V = V;  
    (*grafo).E = E;  
    (*grafo).edge = new Edge[E];  
  
    return grafo;  
}  
  
// Estrutura para representar um subset para o union-find.
struct subset {  
    int parent;  
    int rank;  
};  
 
// Função para determinar o set de um elemento i
// (utiliza a técnica de compressão de caminho)
int find(subset subsets[], int i) {  
    // Encontra a raiz e a torna pai de i.
    // (compressão de caminho)
    if ( subsets[i].parent != i ){
        subsets[i].parent = find(subsets, subsets[i].parent);
    }  
  
    return subsets[i].parent;  
}  
  
// Função que une dois sets de x e y. (Utiliza união por rank)
void Union(subset subsets[], int x, int y) {  
    int xroot = find(subsets, x);  
    int yroot = find(subsets, y);  
        
    // Attach smaller rank tree under root of high  
    // rank tree(Union by Rank)  
    if ( subsets[xroot].rank < subsets[yroot].rank ){
        subsets[xroot].parent = yroot;
    } else if ( subsets[xroot].rank > subsets[yroot].rank ){
        subsets[yroot].parent = xroot;
    }
  
    // Se os ranks são iguais, torna um deles a raiz e incremente o rank em 1.
    else {  
        subsets[yroot].parent = xroot;  
        subsets[xroot].rank++;  
    }  
}  
  
// Compara duas arestas de acordo com o peso delas. Neste caso, e, a comp2 será utilizada para ordenar crescentemente.  
// Será utilizada em qsort() 
int comp1(const void* a, const void* b) {  
    Edge* a1 =(Edge*)a;  
    Edge* b1 =(Edge*)b;  
    return (*a1).peso > (*b1).peso;  
}  
  
// Para ordenar decrescentemente 
int comp2(const void* a, const void* b) {  
    Edge* a1 =(Edge*)a;  
    Edge* b1 =(Edge*)b;  
    return (*a1).peso < (*b1).peso;  
}  
  
//Função principal para construir a árvore geradora mínima utilizando o algoritmo de Kruskal.
int Kruskal(Grafo* grafo){  
    int totalPeso = 0;
    int V = grafo -> V;  
    Edge result[V]; // Armazena a árvore geradora mínima
    int e = 0; // Variável de índice para result[]  
    int i = 0; // Variável de índice para as arestas ordenadas.
    
    // Passo 1: Ordena todas as arestas em ordem crescente (ou decrescente) de acordo
    // com o peso que possuem. 
     
    // Aloca memória para criar V subsets. 
    subset *subsets = new subset[( V * sizeof(subset) )];  
  
    // Cria V subsets com um elemento e determina todos como próprios pais.
    for ( int v = 0; v < V; v++ ) {  
        subsets[v].parent = v;  
        subsets[v].rank = 0;  
    }  
    // Número de arestas a serem inseridas na AGM é V-1.
    while ( i < grafo -> E && e < V - 1  ) {  
        // Passo 2: Seleciona a menor aresta; Incrementa o índice para a próxima iteração.
        Edge next_edge = grafo -> edge[i++];  
  
        int x = find(subsets, next_edge.src);  
        int y = find(subsets, next_edge.dest);  
  
        // Se incluir essa aresta não forma ciclo, ela faz parte da AGM e incrementa o índice 
        // de result para a próxima aresta.
        if ( x != y ){  
            result[e++] = next_edge;  
            Union(subsets, x, y);  
        }  
        // Senão, descarta a próxima aresta (next_edge)
    }  

    // Armazena o peso total da árvore geradora mínima (ou máxima, a depender de qual chamada trata-se).
    for ( i = 0; i < e; i++ ){
        totalPeso = totalPeso + result[i].peso;
    }

    return totalPeso;  
} 

int main() {
    int N, U, V, W, min, max;
    int i = 0;
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    cin >> N;

    Grafo* grafo = creategrafo(N, N);
    for ( i = 0; i < N; i++ ) {
        cin >> U >> V >> W;
        
        (*grafo).edge[i].src = U;
        (*grafo).edge[i].dest = V;
        (*grafo).edge[i].peso = W;
    }

    qsort( (*grafo).edge, (*grafo).E, sizeof((*grafo).edge[0]), comp1 ); 
    // Armazena o custo da Árvore Geradora Mínima
    min = Kruskal(grafo); 
    
    qsort( (*grafo).edge, (*grafo).E, sizeof((*grafo).edge[0]), comp2 ); 
    // Armazena o custo da Árvore Geradora Máxima
    max = Kruskal(grafo);  
    
    cout << max << endl;
    cout << min << endl; 
    return 0;
}