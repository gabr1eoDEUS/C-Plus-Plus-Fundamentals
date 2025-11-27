#include <iostream>
using namespace std;
int main() {
	const int tamanho = 4;
	float notas[tamanho];
	int soma = 0;
	for (int i = 0; i < tamanho; i++) {
		cout << "Digite a nota " << (i + 1) << ": ";
		cin >> notas[i];
	}
	for (int y = 0; y < tamanho; y++) {
		soma += notas[y];
	}
	float media = (float)soma / tamanho;
	cout << "Media final: " << media << endl;
	return 0;
};
