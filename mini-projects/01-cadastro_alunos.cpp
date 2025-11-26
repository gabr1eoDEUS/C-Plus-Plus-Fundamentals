#include <iostream>
#include <string>
using namespace std;
void cadastrarAluno(Aluno& novoAluno);
struct Aluno {
	string nome = "";
	int matricula = 0;
	float media = 0.0;
};
int main() {
	const int TAM = 3;
    return 0;
}
void cadastrarAluno(Aluno &novoAluno) {
	cout << "Nome do Aluno: ";
	getline(cin, novoAluno.nome);
	cout << "Matricula: ";
	cin >> novoAluno.matricula;
	cin.ignore();
	cout << "Media: ";
	cin >> novoAluno.media;
	cin.ignore();
}
