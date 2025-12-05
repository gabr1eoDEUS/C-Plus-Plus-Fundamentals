#include <iostream>
#include <string> 
using namespace std;

// 1. DEFINIÇÃO DA CLASSE (O MOLDE)
class Date {
    // 2. MODIFICADOR DE ACESSO: Por padrão, atributos são private em classes. 
    // Para acessá-los no main(), eles devem ser explicitamente 'public:'.
public: 
    int day;
    int month;
    int year;
}; // O PONTO E VÍRGULA é OBRIGATÓRIO!

int main() {
    // 3. INSTANCIAÇÃO DO OBJETO (O dado real na memória)
    Date d1; // Cria o objeto d1 do tipo Date na Stack.
    Date d2; // Cria o objeto d2 do tipo Date na Stack.

    // Acessando e atribuindo valores aos atributos públicos
    d1.day = 5;
    d1.month = 12;
    d1.year = 2025;

    cout << "Data 1: " << d1.day << "/" << d1.month << "/" << d1.year << endl;
    
    return 0;
}
