#include <iostream>
#include <string> 
using namespace std; // Traz todos os identificadores do namespace 'std' para o escopo global.

void func1() {
	int a = 10; // Variável 'a' com escopo local à func1.
}

// 1. FUNÇÃO ORIGINAL
int add(int x, int y) {
	return x + y;
}

// 2. SOBRECARGA (Diferença na QUANTIDADE de parâmetros)
// O compilador usa esta versão se receber três inteiros.
int add(int x, int y, int z) { 
	return x + y + z;
}

// 3. SOBRECARGA (Diferença no TIPO e na ORDEM dos parâmetros)
// O compilador usa esta versão se receber um double seguido de um int.
int add(double x, int y) { 
	return x + y + 1000; // Lógica diferente para demonstração
}

int main() {
	int a = 5; // Variável 'a' com escopo local a main.
	// int a = 15; // ERRO: Re-declaração no mesmo escopo (main).

	// O compilador escolhe a versão correta (int, int).
	cout << "Soma (int, int): " << add(10, 20) << endl; 
    
	// O compilador escolhe a versão correta (int, int, int).
	cout << "Soma (int, int, int): " << add(10, 20, 30) << endl; 
    
	// O compilador escolhe a versão correta (double, int) - 10 se torna 10.0.
	cout << "Soma com sobrecarga (double, int): " << add(10.0, 20) << endl; 
    
	return 0;
}
