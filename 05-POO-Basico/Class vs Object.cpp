#include <iostream>
using namespace std;

// 1. CLASSE: O MOLDE (Planta)
class Date{
public:
    int day;
    int month;
    int year;
}; // O molde é definido apenas UMA VEZ.

int main() {
    // 2. OBJETOS: AS INSTÂNCIAS (Estruturas reais na memória)
    // d1 e d2 são objetos criados a partir do molde Date.
    
    // Objeto d1 (possui sua própria cópia de day, month, year)
    Date d1; 
    d1.day = 14;
    d1.month = 1;
    d1.year = 2002;
    cout << "Data d1: " << d1.day << "/" << d1.month << "/" << d1.year << endl;
    
    // Objeto d2 (possui sua própria cópia, COMPLETAMENTE INDEPENDENTE de d1)
    Date d2; 
    d2.day = 25;
    d2.month = 12;
    d2.year = 2023;
    cout << "Data d2: " << d2.day << "/" << d2.month << "/" << d2.year << endl;
    
    return 0;
}
