#include <iostream>
#include <string>
using namespace std;
struct Aluno {
	string nome = "";
	int matricula = 0;
	float media = 0.0;
};
void cadastrarAluno(Aluno& novoAluno);
void exibirTurma(const Aluno turma[], int tamanho);
int main() {
	const int TAM = 3;
	Aluno turma[TAM];
	for (int i = 0; i < TAM; i++) {
		cadastrarAluno(turma[i]);
	}
	exibirTurma(turma, TAM);
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
void exibirTurma(const Aluno turma[], int tamanho) {
	for (int i = 0; i < tamanho; i++) {
		cout << "Aluno: " << turma[i].nome << endl;
		cout << "Matricula: " << turma[i].matricula << endl;
		cout << "Media: " << turma[i].media << endl;
	}
}
