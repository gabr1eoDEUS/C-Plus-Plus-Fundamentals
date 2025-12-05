#include <iostream>
#include <string> 
using namespace std;

int main() {
    string abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    // 1. ACESSO ARRAY-LIKE: Usa o operador de subscrito [ ] para acessar o caractere 
    // na posição de índice 9 (o décimo caractere).
    cout << "Caractere no índice 9: " << abc[9] << endl; // Deve imprimir 'J'

    // 2. ITERAÇÃO ARRAY-LIKE: Usa o Range-Based For Loop para percorrer cada caractere, 
    // assim como faria com qualquer array ou coleção.
    cout << "Iterando e buscando 'Z':\n";
    for(auto l: abc){
        // Acesso a l é rápido, pois os caracteres estão em memória contígua.
        if(l == 'Z'){
            cout << l << endl;
            break; // Sai do loop ao encontrar o caractere.
        }
        cout << l << " - ";
    }
    
    // Nota: O std::string gerencia o tamanho e a terminação (caractere nulo '\0') automaticamente.
    return 0;
}
