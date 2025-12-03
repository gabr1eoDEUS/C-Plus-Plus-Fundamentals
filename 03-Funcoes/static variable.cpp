#include <iostream>
#include <string>
using namespace std;

// Função que simula um gerador de ID sequencial
int nextId() {
	// 1. INICIALIZAÇÃO ÚNICA: 'id' é inicializado como 1 SOMENTE na primeira vez que nextId() é chamada.
	// 2. PERSISTÊNCIA: 'id' NÃO é destruída quando a função retorna. Seu valor é PRESERVADO.
	// 3. ESCOPO LOCAL: 'id' SÓ PODE ser acessada dentro de nextId().
	static int id = 1; 
    
	// O operador '++' pós-fixado retorna o valor ATUAL (1) e DEPOIS incrementa para 2, 3, etc.
	return id++;
}

int main() {
	// Cada chamada obtém o valor anterior de 'id' e o incrementa para o futuro.
	cout << nextId() << endl; // Saída: 1 (id passa a ser 2)
	cout << nextId() << endl; // Saída: 2 (id passa a ser 3)
	cout << nextId() << endl; // Saída: 3 (id passa a ser 4)
	cout << nextId() << endl; // Saída: 4 (id passa a ser 5)
	return 0;
}
