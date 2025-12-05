#include <iostream>
#include <string> 
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    
    // 1. FUNÇÃO ASSIGN: Inicializa ou redimensiona o vetor com 10 cópias do valor 1.
    nums.assign(10, 1); 
    
    nums[5] = 5; // Modificação array-like (altera o valor do sexto elemento)
    
    // 2. FUNÇÃO ERASE: Remove um elemento no meio.
    // nums.begin() + 5 calcula o iterador para o índice 5. 
    // Todos os elementos subsequentes são deslocados.
    nums.erase(nums.begin() + 5); 
    
    // O array agora tem 9 elementos.
    for(auto num : nums) {
        cout << num << " "; 
    }
    
    cout << endl << "Tamanho do vetor (apos erase): " << nums.size() << endl; // Deve ser 9
    
    // 3. FUNÇÃO CLEAR: Remove todos os elementos.
    nums.clear(); 
    
    cout << endl << "Tamanho do vetor apos clear: " << nums.size() << endl; // Deve ser 0
    
    return 0;
}
