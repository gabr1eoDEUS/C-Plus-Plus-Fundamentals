#include <iostream>
#include <string>
using namespace std;
int main() {
	long int idFuncionario = 56334878;
	double salarioBruto = 1600.00;
	bool Ativo = true;
	string cargo = "Auxiliar Administrativo";
	cout << "-----------------------------------" << endl;
	cout << "ID do Funcionario: " << idFuncionario << endl;
	cout << "Salario Bruto: " << salarioBruto << endl;
	cout << "Ativo: " << (Ativo ? "Sim" : "Nao") << endl;
	cout << "Cargo: " << cargo << endl;
	return 0;
}
