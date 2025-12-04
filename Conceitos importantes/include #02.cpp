#include <iostream> // Procura nas bibliotecas do sistema
#include <string>
#include "include_2.h" // Procura localmente dentro do projeto (onde está o protótipo de add)
using namespace std;

// O compilador já viu o protótipo de 'add' no include_2.h
int main() {
	cout << "Resultado da soma (chamada externa): " << add(3, 5) << endl;
	return 0;
}

// DEFINIÇÃO: A implementação da função (o compilador só precisa de uma).
int add(int a, int b) {
	return a + b;
}
