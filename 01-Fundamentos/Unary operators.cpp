#include <iostream>
using namespace std; 

int main() {
	int x = 2; // Variável 'x' inicializada.
	int y = 1; // Variável 'y' inicializada.

	// 1. Operação Simples (Pré e Pós-fixado):
	// Em linhas separadas, o resultado final é o mesmo (incremento em 1).
	
	x++; // Pós-fixado: Retorna o valor antigo (2), DEPOIS incrementa (x se torna 3).
	++y; // Pré-fixado: INCREMENTA (y se torna 2), DEPOIS retorna o novo valor.
	
	cout << "x após x++: " << x << endl; // Imprime 3
	cout << "y após ++y: " << y << endl; // Imprime 2

	x--; // Pós-fixado: Retorna o valor antigo (3), DEPOIS decrementa (x se torna 2).
	--y; // Pré-fixado: DECREMENTA (y se torna 1), DEPOIS retorna o novo valor.
	
	cout << "x após x--: " << x << endl; // Imprime 2
	cout << "y após --y: " << y << endl; // Imprime 1

	// 2. Rigidez: Pós-fixado vs. Pré-fixado em Expressão Complexa
	// O uso em expressões complexas deve ser evitado devido à ordem de avaliação:

	// PASSO 1 (LADO ESQUERDO): x-- (pós-fixado)
	// O valor de x (que é 2) é USADO para a comparação.
	// APÓS o uso, x é decrementado (x se torna 1).
    
	// PASSO 2 (LADO DIREITO): ++y (pré-fixado)
	// O valor de y (que é 1) é INCREMENTADO (y se torna 2).
	// O NOVO valor (2) é USADO para a comparação.
	
	// Expressão avaliada: (2 == 2) -> true (ou 1)
	cout << "Resultado da Expressão: " << (x-- == ++y) << endl; 
    
    // Após a linha:
	// x é 1 e y é 2. Isso confirma que a mudança de valor acontece após o uso de x--.
	cout << "x Final: " << x << ", y Final: " << y << endl;


	return 0;
}
