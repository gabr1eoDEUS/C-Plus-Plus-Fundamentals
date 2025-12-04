#include <iostream>
#include <string> 
using namespace std;

int main() {
    // 1. DECLARAÇÃO RIGOROSA: Cria um Array de 5 strings.
    // O tamanho [5] é FIXO e definido em tempo de compilação.
    // Os 5 elementos são alocados em memória contígua.
    string names[5]; 

    // 2. INDEXAÇÃO ZERO-BASED: O primeiro elemento é o índice 0.
    names[0] = "Gabriel";
    names[1] = "Pedro";
    names[2] = "Nayron";
    names[3] = "Silva";
    // O último elemento, para um tamanho de 5, é o índice 4 (N-1).
    names[4] = "Carla"; 

    // 3. ACESSO: O acesso a qualquer elemento (por índice) é em tempo constante O(1).
    cout << "Nome: " << names[0] << endl;

    // 🚨 CUIDADO: Tentar acessar names[5] resultaria em 'Array Out of Bounds' (acesso de memória inválido).
    
    return 0;
}
