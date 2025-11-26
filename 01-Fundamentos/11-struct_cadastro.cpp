#include <iostream>
#include <string>
using namespace std;
struct Aluno {
	string nome = "";
	int matricula = 0;
	float media = 0.0;
};
int main() {
	Aluno novoAluno;
	cout << "Digite o nome do aluno: ";
	getline(cin, novoAluno.nome);
	cout << "Digite a matricula do aluno: ";
	cin >> novoAluno.matricula;
	cin.ignore();
	cout << "Digite a media do aluno: ";
	cin >> novoAluno.media;
	cout << "Aluno cadastrado com sucesso!" << endl;
	cout << "----------------------------------" << endl;
	cout << "Nome: " << novoAluno.nome << endl;
	cout << "Matricula: " << novoAluno.matricula << endl;
	cout << "Media: " << novoAluno.media << endl;
  
    return 0;
}
