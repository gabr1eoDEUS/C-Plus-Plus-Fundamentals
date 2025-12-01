#include <iostream>
using namespace std; 

int main() {
    
	// 1. Variáveis de Entrada:
	double finalGrade; // Usa double para permitir notas decimais (rigor na precisão).
	cout << "Enter the final grade: ";
	cin >> finalGrade;

	bool goodBehavior; // bool para armazenar o valor booleano (true/1 ou false/0) da entrada.
	cout << "Is he/she well-behaved? ";
	cin >> goodBehavior;

	// 2. Operadores Lógicos (Construção de Lógica Complexa):
	
	// AND (&&): O aluno é bom SE e SOMENTE SE a nota for >= 9 E o comportamento for true.
	// Requer que AMBAS as condições sejam verdadeiras.
	bool goodStudent = finalGrade >= 9 && goodBehavior; 
	
	// OR (||): O aluno é médio SE a nota for >= 9 OU o comportamento for true.
	// Requer que PELO MENOS UMA condição seja verdadeira.
	bool averageStudent = finalGrade >= 9 || goodBehavior;
	
	// AND (&&) com NOT (!): O aluno é ruim SE a nota for <= 3 E o comportamento for FALSA (!).
	bool badStudent = finalGrade <= 3 && !goodBehavior; 
	
	// OR (||) com NOT (!): O empréstimo será cancelado SE a nota for <= 3 OU o comportamento for FALSA (!).
	bool loanCancelled = finalGrade <= 3 || !goodBehavior;

	// 3. Saída: Imprime os resultados booleanos (1 ou 0).
	cout << "Good student? " << goodStudent << endl;
	cout << "Average student? " << averageStudent << endl;
	cout << "Bad student? " << badStudent << endl;
	cout << "Will the loan be cancelled? " << loanCancelled << endl;

	return 0;
}
