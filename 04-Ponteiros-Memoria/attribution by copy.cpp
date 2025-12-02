#include <iostream>
using namespace std;

int main() {
	int a = 2;
    
	// 1. ATRIBUIÇÃO POR CÓPIA:
	// O valor de 'a' (2) é copiado. O compilador aloca um ENDEREÇO DE MEMÓRIA NOVO e diferente para 'b'.
	int b = a; 
    
	// 2. Manipulação Independente:
	a++; // Incrementa APENAS o valor no endereço de 'a' (a = 3).
	b--; // Decrementa APENAS o valor no endereço de 'b' (b = 1).

	// Rigidez: Os valores são independentes.
	cout << "Valor de a (agora 3): " << a << endl; 
	cout << "Valor de b (agora 1): " << b << endl; 

	return 0;
}
