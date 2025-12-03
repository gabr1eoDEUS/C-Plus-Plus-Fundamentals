#include <iostream>
#include <string>
using namespace std;

// Assinatura rigorosa da função main para receber argumentos de linha de comando.
int main(int argc, char const *argv[]) {
	// 1. argc (Argument Count): Recebe o número de argumentos. Mínimo é 1.
	cout << "Numero de argumentos (argc): " << argc << endl;
    
	// 2. argv[0] (Argument Vector): O primeiro elemento é SEMPRE o nome/caminho do executável.
	cout << "Nome do executável (argv[0]): " << argv[0] << endl;

	// 3. Checagem de segurança: É obrigatório verificar se existem argumentos
	// além do nome do executável antes de tentar acessá-los.
	if (argc >= 2) {
		// 4. argv[1]: O primeiro argumento fornecido pelo usuário.
		cout << "Primeiro argumento do usuario (argv[1]): " << argv[1] << endl;
	}

	return 0;
}
