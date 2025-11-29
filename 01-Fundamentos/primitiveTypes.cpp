#include <iostream>
using namespace std; // Importando namespace std para simplificar I/O neste exemplo.

int main() {
    
    // 1. Tipo Booleano (bool): Armazena VERDADEIRO (true) ou FALSO (false).
    // Internamente, 'true' é representado por 1 e 'false' por 0.
	bool isAdmin = true; 
	cout << "isAdmin: " << isAdmin << endl;

    // 2. Tipo Caractere (char): Armazena um único caractere.
    // O valor é armazenado como o código numérico ASCII do símbolo.
	char symbol = '#';
	cout << "symbol: " << symbol << endl;

    // 3. Tipo Inteiro (int): Tipo inteiro padrão (geralmente 4 bytes).
    // Usado como padrão para contadores ou idade.
	int age = 23;
	cout << "age: " << age << endl;

    // 4. Tipo Ponto Flutuante (float): Precisão simples (menor precisão, menor memória).
    // Não recomendado para cálculos críticos como dinheiro.
	float pi = 3.14;
	cout << "pi: " << pi << endl;

    // 5. Tipo Dupla Precisão (double): Precisão dupla (maior precisão, mais memória).
    // É o padrão rigoroso para valores monetários e científicos.
	double PI = 3.141592;
	cout << "PI: " << PI << endl;

    // 6. Modificadores de Capacidade:
    // short int (Curto): Economiza memória para números pequenos.
	short int n1 = 1;
	cout << "n1: " << n1 << endl;
    
    // long int (Longo): Armazena números inteiros maiores que o 'int' padrão.
	long int n2 = 1;
	cout << "n2: " << n2 << endl;
    
    // unsigned int: Não permite números negativos, dobrando a capacidade máxima positiva.
	unsigned int n3 = 1;
	cout << "n3: " << n3 << endl;

	return 0;
}
