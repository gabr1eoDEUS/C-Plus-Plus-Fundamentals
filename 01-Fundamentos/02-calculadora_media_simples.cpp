#include <iostream>
using namespace std;
int main() {
	const float PESO_TRABALHO = 0.40f;
	const float PESO_PROVA = 0.60f;
	float notaTrabalho = 0.0, notaProva = 0.0;
	cout << "Digite a nota do trabalho: ";
	cin >> notaTrabalho;
	cout << "Digite a nota da prova: ";
	cin >> notaProva;
  	cout << "--------------------\n";
	float notaFinal = (notaTrabalho * PESO_TRABALHO) + (notaProva * PESO_PROVA);
	cout << "A nota final do aluno é: " << notaFinal << endl;
	return 0;
};
