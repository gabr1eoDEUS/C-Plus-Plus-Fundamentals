#include <iostream>
#include <string>
using namespace std;
int main() {
	double notaFinal = 7.5;
	if (notaFinal >= 9) {
		cout << "Classificacao: Excelente" << endl;
	}
	else if (notaFinal >= 7.0) {
		cout << "Classificacao: Aprovado" << endl;
	}
	else if (notaFinal >= 5.0) {
		cout << "Classificacao: Recuperacao" << endl;
	}
	else {
		cout << "Classificacao: Reprovado" << endl;
	}
	return 0;
}
