#include <iostream>

using namespace std;

int main() {
	int n, alturaF, resultado = 0;

	cin >> n >> alturaF;

    int altura[n];

	for (int i = 0; i < n; i++){
        cin >> altura[i];
    } 

	for (int i = 0; i+1 < n; i++) {
		int diferenca = alturaF - altura[i];
		altura[i] += diferenca;
		altura[i+1] += diferenca;
		resultado += abs(diferenca);
	}

	cout << resultado << "\n";

	return 0;
}


/*
4 50 45 45 55 55
5 84 84 39 17 72 94
*/