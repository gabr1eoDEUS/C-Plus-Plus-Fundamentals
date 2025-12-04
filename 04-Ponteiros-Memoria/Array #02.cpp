#include <iostream>
#include <string> 
using namespace std;

int main() {
    // 1. INICIALIZAÇÃO IMPLÍCITA: O tamanho é determinado pelo compilador (5 elementos).
    string names[] = {"Gabriel", "Bruno", "Carla", "Daniel", "Eva"};

    // 2. CÁLCULO RIGOROSO DO TAMANHO:
    // sizeof(names) -> Retorna o total de bytes ocupados pelo array inteiro.
    // sizeof(names[0]) -> Retorna o total de bytes ocupados por UM elemento.
    // A divisão resulta no número total de elementos.
    int size = sizeof(names) / sizeof(names[0]);
    
    // 3. ITERAÇÃO SEGURA: O loop utiliza o tamanho calculado para garantir que 
    // nenhum índice fora dos limites (Out of Bounds) seja acessado.
    for(int i = 0; i < size; i++) {
        cout << names[i] << " ";
    }
    cout << endl; // Adiciona uma nova linha para formatação.

    return 0;
}
