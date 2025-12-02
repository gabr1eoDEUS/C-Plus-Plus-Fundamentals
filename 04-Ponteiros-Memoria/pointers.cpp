#include <iostream>
#include <string>
using namespace std;

int main() {
	// ----------------------------------------------------------------------------------
	// Ponteiro #01: Declaração e Desreferência
	cout << "Ponteiro #01\n";
	int value = 98765;
	int& refValue = value; // Referência (apelido)
	int* ptr = &value;    // Ponteiro: Variável que armazena o ENDEREÇO de 'value'.

	// Demonstração da dualidade:
	cout << "Valor: " << value << "\t Referência: " << refValue << endl;
	cout << "Ponteiro (Endereço): " << ptr << endl; // Saída: O Endereço de Memória (Ex: 0x...)
	cout << "Desreferência (Valor): " << *ptr << endl; // Saída: 98765 (Acesso ao valor no endereço)

	cout << "---------------------------------------\n";

	// ----------------------------------------------------------------------------------
	// Ponteiro #02: Reatribuição (Diferença fundamental da Referência)
	cout << "Ponteiro #02\n";
	int* ptr1 = nullptr; // Inicialização segura para ponteiros que não apontam para nada.

	int x = 5;
	int y = 10;
	
	ptr1 = &x; // Ponteiro aponta para 'x'.
	cout << "Valor de x via ptr1: " << *ptr1 << endl; // Saída: 5

	// Rigidez: O ponteiro PODE SER REATRIBUÍDO para apontar para outra variável.
	ptr1 = &y; // Ponteiro AGORA aponta para 'y'.
	cout << "Valor de y via ptr1: " << *ptr1 << endl; // Saída: 10

	cout << "---------------------------------------\n";

	// ----------------------------------------------------------------------------------
	// Ponteiro #03 & Array: Aritmética de Ponteiros
	cout << "Ponteiro #03\n";
	int arr[] = { 47, 33, 72, 13, 88 };
	// O nome do array 'arr' é um ponteiro constante para 'arr[0]'.
	int* ptr2 = &arr[0]; 
	cout << "Primeiro elemento (47): " << *ptr2 << endl;

	// Aritmética de Ponteiros: O '++' move o ponteiro pelo TAMANHO do TIPO DE DADO (4 bytes para int).
	ptr2++; // Move para o endereço de 'arr[1]'.
	cout << "Segundo elemento (33): " << *ptr2 << endl; 
	ptr2++; // Move para o endereço de 'arr[2]'.
	cout << "Terceiro elemento (72): " << *ptr2 << endl;

	// Demonstração da Equivalência (Array Access Notation):
	int w = 123;
	int* ptr3 = &w; // ptr3 aponta para o endereço de 'w'.

	cout << "Endereço: " << ptr3 << endl;
	cout << "Valor (*ptr3): " << *ptr3 << endl;
	// Rigidez: Para fins de leitura, ptr3[0] é o mesmo que *ptr3.
	cout << "Valor (ptr3[0]): " << ptr3[0] << endl; 

	// ----------------------------------------------------------------------------------
	// Modificação via Ponteiro
	*ptr3 = 321; // Desreferencia e MUDA o valor no endereço apontado.

	cout << "Novo valor via *ptr3: " << *ptr3 << endl; 
	cout << "Valor de w (Modificado): " << w << endl; // 'w' também mudou.

	return 0;
}
