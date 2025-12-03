#include <iostream>
#include <string>
using namespace std;

// 1. ESCOPO GLOBAL: Variável visível e persistente em todo o programa.
int global = 1;
const double PI = 3.1415; // Variável global constante (valor imutável).

void fun3() {
	// fun3 é empilhada (Call Stack).
	cout << "fun3 executada" << endl;
	// fun3 retorna e é desempilhada.
}

void fun2() {
	// fun2 é empilhada.
	global += 1; // Modifica a variável global.
	fun3();      // Chama e empilha fun3.
	// fun2 retorna e é desempilhada.
}

void func1() {
	// func1 é empilhada.
	// 2. ESCOPO DE FUNÇÃO: 'a' só existe enquanto func1 está em execução.
	int a = 3; 
    
	// 3. ESCOPO DE BLOCO: Bloco aninhado dentro da função.
	{
		int b = 20; // 'b' só existe dentro deste par de chaves {}.
	}
	// cout << b << endl; // NÃO FUNCIONARIA AQUI (Escopo de Bloco já se encerrou).
    
	global += 1; // Modifica a variável global.
	fun2();      // Chama e empilha fun2.
	// func1 retorna e é desempilhada.
}

int main() {
	// main é empilhada primeiro.
	func1(); // Inicia a cadeia de chamadas (pilha: main -> func1 -> fun2 -> fun3).
	// A variável 'global' foi alterada 2 vezes dentro das funções.
	cout << "global: " << global << endl; // Saída: 1 (original) + 2 (func1 e fun2) = 3
	return 0;
	// main retorna e é desempilhada (programa encerra).
}
