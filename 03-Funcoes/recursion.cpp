#include <iostream>
#include <string>
using namespace std;

// Protótipos das funções
int factorial(int n);
int factorialRecu(int n);

int main() {
	int n;
	cout << "Number fact: ";
	cin >> n;
    
	// 1. Solução Iterativa (Loop)
	cout << "Resultado Iterativo: " << factorial(n) << endl;
    
	// 2. Solução Recursiva (Auto-Chamada)
	cout << "Resultado Recursivo: " << factorialRecu(n) << endl;
	
	return 0;
}

// SOLUÇÃO ITERATIVA (Sem Recursividade)
// 6! = 6 * 5 * 4 * 3 * 2 * 1
int factorial(int n) { 
	int total = 1;
	for (int i = 2; i <= n; i++) {
		total *= i;
	}
	return total;
}

// SOLUÇÃO RECURSIVA
int factorialRecu(int n) {
	// 1. CASO BASE (Base Case): Condição que para a recursão.
	// Se n=1 (ou n=0), a função retorna 1, evitando o loop infinito.
	if (n != 1) { 
		// 2. PASSO RECURSIVO (Recursive Step):
		// A função chama a si mesma (factorialRecu) com a entrada reduzida (n - 1).
		// O controle retorna para esta linha quando a chamada interna termina.
		return n * factorialRecu(n - 1);
	}
	else {
		return 1;
	}
}
