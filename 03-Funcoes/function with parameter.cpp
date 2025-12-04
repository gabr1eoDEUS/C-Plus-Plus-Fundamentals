
#include <iostream>
#include <string>
using namespace std;

// PASSO 1: O ALIAS DO PONTEIRO DE FUNÇÃO
// 'binaryop' é AGORA um tipo. Ele representa um PONTEIRO (*) 
// para uma função que RETORNA um 'int' e RECEBE dois 'int's.
using binaryop = int(*)(int, int); 

// PASSO 2: A FUNÇÃO DE ORDEM SUPERIOR
// A função 'exec' recebe um parâmetro (func) que é um PONTEIRO DE FUNÇÃO.
int exec(binaryop func) {
    // PASSO 3: DESREFERÊNCIA E CHAMADA
    // (*func) desreferencia o ponteiro para acessar a função no endereço.
    // Em seguida, (4, 7) executa essa função.
    return (*func)(4, 7); 
}

// Funções que correspondem à assinatura 'binaryop' (int (*)(int, int)):
int add(int a, int b) {
	return a + b;
}
int subtract(int a, int b) {
	return a - b;
}
int min(int a, int b) {
	// Operador ternário: Retorna 'a' se for menor que 'b', senão retorna 'b'.
	return (a < b) ? a : b;
}

int main() {
    // PASSO 4: PASSAGEM IMPLÍCITA
    // Quando você passa 'add', 'subtract' ou 'min' sem parênteses,
    // o C++ automaticamente passa o ENDEREÇO da função (o ponteiro).
	cout << "Soma: " << exec(add) << endl; 
	cout << "Subtração: " << exec(subtract) << endl; 
	cout << "Menor valor: " << exec(min) << endl; 
	return 0;
}
