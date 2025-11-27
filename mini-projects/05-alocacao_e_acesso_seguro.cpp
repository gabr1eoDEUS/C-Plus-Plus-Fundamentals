#include <iostream>
#include <string>
using namespace std;
class Aluno {
private:
	string nome = "";
	float notaFinal = 0.0;
public:
	void setNome(string nome) {
		this->nome = nome;
	}
	void setNotaFinal(float nota) {
		this->notaFinal = nota;
	}
	string getNome() const {
		return nome;
	}
	float getNotaFinal() const {
		return notaFinal;
	}
};
Aluno* criarAlunoDinamico(string nome, float notaFinal);
void exibirAluno(const Aluno& a);
int main() {
	Aluno* aluno1 = criarAlunoDinamico("Gabriel", 7.5);
	exibirAluno(*aluno1);
	delete aluno1;
	return 0;
}
Aluno* criarAlunoDinamico(string nome, float notaFinal) {
	Aluno* novoAluno = new Aluno();
	novoAluno->setNome(nome);
	novoAluno->setNotaFinal(notaFinal);
	return novoAluno;
}
void exibirAluno(const Aluno& a) {
	cout << "Nome: " << a.getNome() << endl;
	cout << "Nota Final: " << a.getNotaFinal() << endl;
}
