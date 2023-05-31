#include <iostream>

using std::cout;
using std::cin;

int main(){

    short int alunos, aux = 0;
    cin >> alunos;
    short int ocorrencias[alunos], notas[alunos];

    for(short int i = 0; i < alunos; i++){
        cin >> notas[i];
        ocorrencias[i] = 0;
    }

    for(short int i = 0; i < alunos; i++){
        for(short int p = 0; p < alunos; p++){
            if(notas[p] == notas[i]){
                aux++;
                ocorrencias[i] = aux;
            }
    }
    aux = 0;
}   
aux = 0;
    for(short int i = 0; i < alunos; i++){
        //pode ter erro no >= ocorrencias[...] fazendo pular o 1° da sequencia
        if(ocorrencias[i] == ocorrencias[aux] && notas[i] > notas[aux]){
            aux = i;
        }
        if(ocorrencias[i] == ocorrencias[aux] && notas[aux] > notas[i]){
            aux = aux;
        }
        if(ocorrencias[i] > ocorrencias[aux]){
            aux = i;
        }
    }
    cout << notas[aux] <<"\n";
}
/*
10 20 25 85 40 25 90 40 40 55 25
100 59 45 95 25 56 61 53 93 52 10 72 36 93 8 63 39 75 12 47 76 60 99 10 64 90 0 23 97 45 26 56 9 100 34 93 72 88 55 52 12 63 20 79 96 13 37 58 90 14 39 7 79 40 98 77 50 41 31 41 37 6 98 13 68 97 74 79 88 49 40 12 39 0 10 81 50 33 12 27 87 82 63 62 87 61 27 72 28 60 100 83 92 64 15 10 28 96 74 91 94
6 25 43 12 34 25 22
13 20 25 85 40 25 90 25 40 55 40 60 60 60
10 89 100 38 1 92 84 94 44 92 35
*/