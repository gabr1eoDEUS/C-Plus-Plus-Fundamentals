#include <iostream>
#include <string>
using namespace std;

int main() {
	// ----------------------------------------------------------------------------------
	// Reference #01: Operador de Endereço (&)
	// O operador '&' (address-of) retorna o endereço de memória onde a variável reside.
	cout << "Reference #01\n";
	int a = 10;
	cout << a << "\tEndereço de 'a': " << &a << endl;

	string name = "Gabriel";
	cout << name << "\tEndereço de 'name': " << &name << endl;
	cout << "---------------------------------\n";

	// ----------------------------------------------------------------------------------
	// Refernece #02: Criação do Apelido e Modificação Mútua
	cout << "Reference #02 - Modificacao\n";
	int x = 7;
	// Sintaxe: 'int&' declara 'xReference' como um apelido para 'x'.
	int& xReference = x; 

	// Rigidez: 'x' e 'xReference' têm o MESMO endereço de memória.
	cout << "x    : " << x << "  ->\t\t Endereço: " << &x << endl;
	cout << "xRef: " << xReference << "  ->\t\t Endereço: " << &xReference << endl;
	cout << "------------------------------------\n";

	// Mudar o original altera o apelido:
	cout << "Incremento:\nx++\n";
	x++; // x agora é 8.
	cout << "Valor de x    : " << x << endl;
	cout << "Valor de xRef: " << xReference << endl; // xReference também é 8.

	// Mudar o apelido altera o original:
	cout << "Decremento:\nxRef--\n";
	xReference--; // xReference agora é 7.
	cout << "Valor de x    : " << x << endl; // x também é 7.
	cout << "Valor de xRef: " << xReference << endl;
	cout << "------------------------------------\n";

	// ----------------------------------------------------------------------------------
	// Reference #03: Não Reatribuição
	cout << "Reference #3\n";
	// string& badRef; // Erro de compilação: Referência deve ser inicializada.
	
	string greeting = "Hi"; // Endereço A
	string& ref = greeting; // 'ref' é um apelido para o Endereço A

	string nome = "Ola"; // Endereço B (diferente)
	
	// CUIDADO: Isso NÃO FAZ 'ref' apontar para 'nome'.
	// Isso COPIA o valor de 'nome' ("Ola") para o Endereço A.
	ref = nome;
	
	// Rigidez: 'ref' e 'greeting' (Endereço A) agora contêm "Ola". 'nome' (Endereço B) continua com "Ola".
	cout << "nome: \tref: \tgreeting:\n";
	cout << nome << "\t" << ref << "\t" << greeting << endl;

	// 'ref' continua sendo um apelido para 'greeting':
	ref.append("!"); 
	cout << "Apos ref.append(!), greeting é: " << greeting << endl; // 'greeting' é "Ola!"

	return 0;
}
