#include <iostream>
using namespace std; 

int main() {
    
	// 1. Uso Simples do Ternário: Atribuição de String
	bool sunny = true; // Condição booleana.
    
	// Estrutura: (Condição) ? ValorSeVerdadeiro : ValorSeFalso
	// Se 'sunny' for true, 'result' recebe ":)". Caso contrário, recebe ":(".
	string result = sunny ? ":)" : ":(";
	cout << "Result: " << result << endl;

	// 2. Uso Complexo do Ternário: Atribuição Aritmética Condicional
	
	double balance = 1234.56; // Saldo inicial, tipo double para precisão monetária.
	double value; // Valor da transação.
	cout << "Enter the value: R$";
	cin >> value;

	char creditOrDebit; // Entrada 'c' ou 'd'.
	cout << "Credit (c)/Debt (d): ";
	cin >> creditOrDebit;

	cout << "Balance [Before]: R$" << balance << endl;

	// Ternário com Atribuição Aumentada (+=):
	// Condição: creditOrDebit é igual a 'c'?
	// Se TRUE (crédito), o valor atribuído a 'balance' é +value.
	// Se FALSE (débito), o valor atribuído a 'balance' é -value.
	balance += creditOrDebit == 'c' ? value : -value;

	cout << "Balance [After]: R$" << balance << endl;

	return 0;
}
