#include <iostream>
#include <string>
using namespace std;
int main() {
	double salarioAnual;
	int tempoDeCasaAnos;
	bool foiAdvertido = false;
	cout << "Digite o salario anual: ";
	cin >> salarioAnual;
	cout << "Digite o tempo de casa em anos: ";
	cin >> tempoDeCasaAnos;
	cin.ignore(); // Limpa o buffer do teclado
	cout << "Foi advertido? (1 para sim, 0 para nao): "; //1 para true , 0 para false
	cin >> foiAdvertido;
	if ((salarioAnual < 50.000 || tempoDeCasaAnos >= 5) && (foiAdvertido == false)) {
		cout << "O funcionario esta elegivel para o bonus." << endl;
	}
	else {
		cout << "O funcionario nao esta elegivel para o bonus." << endl;
	}
	return 0;
}
