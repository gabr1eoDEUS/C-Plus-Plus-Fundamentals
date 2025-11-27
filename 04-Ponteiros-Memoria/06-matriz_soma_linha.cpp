#include <iostream>
using namespace std;
int main() {
	const int linhas = 3;
	const int colunas = 3;
	int soma = 0;
	int matriz[linhas][colunas];
	for (int i = 0; i < linhas; i++) {
		for (int x = 0; x < colunas; x++) {
			cout << "Digite o valor para a posicao [" << i << "][" << x << "]: ";
			cin >> matriz[i][x];
		}
	}
	for (int y = 0; y < linhas; y++) {
		soma += matriz[0][y];
	}
	cout << "A soma dos elementos da primeira linha e: " << soma << endl;

	return 0;
}
