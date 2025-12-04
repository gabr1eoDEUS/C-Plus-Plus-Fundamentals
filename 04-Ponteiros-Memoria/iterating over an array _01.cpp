#include <iostream>
#include <string> 
using namespace std;

int main() {
    string names[] = {"Gabriel", "Bruno", "Carla", "Daniel", "Eva"};

    // 1. LOOP TRADICIONAL (Index-Based): Requer o cálculo de tamanho e o uso do índice.
    int size = sizeof(names) / sizeof(names[0]);
    for(int i = 0; i < size; i++) {
        cout << names[i] << " ";
    }
    
    // 2. LOOP RANGE-BASED (For Each - C++11): Não requer índice ou cálculo de tamanho.
    cout << "\nUsing for each loop:\n";
    // Sintaxe: (Tipo variavel : colecao)
    // 'nome' recebe uma CÓPIA de cada elemento de 'names'.
    for(string nome: names) { 
        cout << nome << " ";
    }

    return 0;
}
