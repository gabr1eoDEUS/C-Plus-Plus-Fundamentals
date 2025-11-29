#include <iostream>

int main() {
    // Declaração e Inicialização:
    // Uso do tipo 'double' para garantir a precisão dos centavos (decimal).
    // O C++ exige que o tipo seja definido (tipagem estática).
	double price = 99.80; 

    // Variável para a taxa. Também 'double' para precisão decimal.
	double tax = 0.08; 
    
	// 5. Bloco de Processamento (Cálculo):
	// A variável 'finalPrice' é inicializada armazenando o resultado da expressão aritmética.
	// O resultado é estaticamente definido como 'double'.
	double finalPrice = price * (1 + tax); 

	// 6. Saída:
    // Imprime o resultado final, utilizando o std::cout de forma explícita (rigor).
	std::cout << "The final price is, " << finalPrice << std::endl;
    
	// Sinaliza o término da execução com sucesso.
	return 0; 
}
