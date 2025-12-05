#include <iostream>
#include <string> 
#include <vector> // Necessário para usar a classe template std::vector
using namespace std;

int main() {
    // DECLARAÇÃO E INICIALIZAÇÃO: O Vector é um template <Tipo>
    vector<int> numeros = {1, 2, 3, 4, 5};
    
    // 1. TAMANHO DINÂMICO (Vantagem Crucial): Adiciona um novo elemento.
    // O Vector realoca memória automaticamente, se necessário.
    numeros.push_back(6); 

    // 2. ITERAÇÃO MODERNAS (Range-Based Loop): Segura e concisa.
    for(auto const num : numeros) { 
        cout << num << " ";
    }
    cout << endl;
    
    // 3. ITERAÇÃO RIGOROSA (Iteradores): A forma mais flexível de percorrer contêineres.
    // numeros.begin() -> Ponteiro/Iterador para o primeiro elemento.
    // numeros.end() -> Ponteiro/Iterador para a posição APÓS o último elemento.
    // *i -> Dereferencia o iterador para acessar o valor.
    for(auto i = numeros.begin(); i != numeros.end(); ++i) {
        if(*i == 1){
            continue;
        }
        cout << *i << endl;
    }

    return 0;
}
