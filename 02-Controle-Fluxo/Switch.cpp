#include <iostream>
using namespace std; 

int main() {
	int month;
	cout << "Enter a month: ";
	cin >> month; // A expressão de controle do switch.

	int numberOfDays = 0;

	// 1. ESTRUTURA SWITCH: Ideal para testar uma variável contra múltiplos valores inteiros/discretos.
	switch (month) {
		case 2: {
			numberOfDays = 28; // Caso isolado para fevereiro.
			break; // OBRIGATÓRIO: Sai do switch para evitar fallthrough indesejado.
		}
		// 2. AGRUPAMENTO DE CASOS (Fallthrough Intencional):
		// Ao omitir o 'break' entre os 'case', todos os casos listados (1, 3, 5, 7, 8, 10, 12)
		// caem ('fallthrough') para a MESMA ação: numberOfDays = 31.
		case 1:{
		case 3: 
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			numberOfDays = 31;
			break; // Sai do switch após a ação ser executada.
		}
		// 3. SEGUNDO AGRUPAMENTO (30 dias):
		case 4: {
		case 6:
		case 9:
		case 11:
			numberOfDays = 30;
			break;
		}
		// 4. DEFAULT:
		default: {
			// Executado se NENHUM dos 'case' acima for correspondido.
			cout << "O mes nao e valido.\n";
			numberOfDays = -1;
			break;
		}
	}
	cout << numberOfDays << " days" << endl;
	return 0;
}
