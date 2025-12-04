#include <iostream>
#include <string> 
using namespace std;

int main() {
    // DECLARAÇÃO: Array bidimensional (Matriz) 3 linhas x 3 colunas.
    // Em C++, os elementos são armazenados em memória SEQUENCIAL (em ordem de linha).
    int matriz[3][3] = {
        {1, 2, 3}, // Linha 0 (matriz[0])
        {4, 5, 6}, // Linha 1 (matriz[1])
        {7, 8, 9}  // Linha 2 (matriz[2])
    };

    // ACESSO RIGOROSO: [Linha] [Coluna]
    // matriz[1][2] -> Acessa a Linha 1, Coluna 2 (Valor 6)
    cout << "Elemento na Linha 1, Coluna 2: " << matriz[1][2] << endl; 

    return 0;
}
