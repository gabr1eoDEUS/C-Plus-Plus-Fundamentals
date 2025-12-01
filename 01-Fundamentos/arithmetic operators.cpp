#include <iostream>
using namespace std; // Usado para simplificar cout/cin neste exemplo de I/O.

int main() {
    
	// 1. Operadores Aritméticos (Operação Binária e Infixa):
	// Demonstração da aplicação dos cinco operadores fundamentais em C++.
	cout << "Resultados Estáticos:" << endl;
	cout << 2 + 2 << endl; // Adição
	cout << 2 - 2 << endl; // Subtração
	cout << 2 * 2 << endl; // Multiplicação
	
	// Rigidez: Divisão de inteiros. 2/2 resulta em 1.
	cout << 2 / 2 << endl; 
	
	// Módulo: Retorna o resto da divisão. 10 dividido por 3 é 3, com resto 1.
	cout << 10 % 3 << endl; 
	cout << "--------------------------\n";
	
	// 2. I/O e Variáveis:
	int x; // Variável 'x' declarada como inteiro (int).
	int y; // Variável 'y' declarada como inteiro (int).

	cout << "x: ";
	cin >> x; // Leitura do primeiro valor (extração >>).
	cout << "y: ";
	cin >> y; // Leitura do segundo valor.
	
	cout << "Resultados Interativos: \n";
    
	// 3. Rigidez: Cuidado na Divisão.
    // Se o usuário digitar, por exemplo, 10 e 3, 
    // a operação x / y resultará em 3 (a parte decimal é truncada).
	cout << "Adição: " << x + y << endl;
	cout << "Subtração: " << x - y << endl;
	cout << "Multiplicação: " << x * y << endl;
	cout << "Divisão (Inteira): " << x / y << endl; 
	cout << "Módulo (Resto): " << x % y << endl; 

	return 0;
}
