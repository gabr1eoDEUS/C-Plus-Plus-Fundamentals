#include <iostream>
using namespace std; 

int main() {
	// Variável de controle inicializada com o valor de saída (sentinela).
	int number = -1; 
    
	// 1. ESTRUTURA DO-WHILE: Pós-Teste
	do
	{
		// O corpo do loop é executado pelo menos uma vez, garantido pelo 'do'.
		cout << "Enter a number [-1 to finish]: ";
		cin >> number; // Leitura do novo valor.
	} 
	// A condição é testada SOMENTE AQUI (pós-teste), após a primeira execução.
	// Se fosse um 'while' comum, o loop terminaria imediatamente.
	while (number != -1);

	return 0;
}
