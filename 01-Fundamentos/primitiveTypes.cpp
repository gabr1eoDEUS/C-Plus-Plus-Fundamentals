#include <iostream>
using namespace std; 

int main() {
    
	// 1. Tipos Fundamentais de Lógica e Caracteres:
	bool isAdmin = true; // Tipo booleano (true/false, 1/0), crucial para lógica de decisão.
	cout << "isAdmin: " << isAdmin << endl;

	char symbol = '#'; // Tipo caractere (1 byte, armazena código ASCII).
	cout << "symbol: " << symbol << endl;

	int age = 23; // Tipo inteiro padrão (int), o mais eficiente para o processador.
	cout << "age: " << age << endl;

	// 2. Tipos Decimais (Análise de Precisão):
	float pi = 3.14; // Ponto flutuante de precisão simples (Menos memória, menos precisão).
	cout << "pi: " << pi << endl;

	double PI = 3.141592; // Ponto flutuante de dupla precisão (Padrão rigoroso para alta precisão).
	cout << "PI: " << PI << endl;

	// 3. Modificadores de Capacidade:
	short int n1 = 1; // Usado para economizar memória em valores pequenos.
	cout << "n1: " << n1 << endl;
	long int n2 = 1; // Usado para armazenar valores inteiros maiores que o 'int' padrão.
	cout << "n2: " << n2 << endl;
	unsigned int n3 = 1; // Não permite valores negativos, dobrando a capacidade positiva.
	cout << "n3: " << n3 << endl;

    // 4. Operador sizeof (Checagem de Memória):
    // A função sizeof() retorna o número de bytes que o tipo ou a variável ocupa na memória.
	cout << "Tamanho em memória dos tipos fundamentais:" << endl;
	cout << sizeof(char) << " byte(s) (char)" << endl;
	cout << sizeof(int) << " byte(s) (int)" << endl;
	cout << sizeof(float) << " byte(s) (float)" << endl;
	cout << sizeof(double) << " byte(s) (double)" << endl;
    // Tipos de caracteres Unicode (para contextos multilingues):
	cout << sizeof(char16_t) << " byte(s) (char16_t)" << endl;
	cout << sizeof(char32_t) << " byte(s) (char32_t)" << endl;
	cout << sizeof(wchar_t) << " byte(s) (wchar_t)" << endl;

	return 0;
}
