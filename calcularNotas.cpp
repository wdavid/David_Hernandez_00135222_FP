#include <iostream>
using namespace std;
int main(){
    int acum=0, nota;
    double promedio;
    for (int i = 1; i <=5 ; i++)
    {
       cout << "Ingrese la "<< i<< " nota: ";
       cin >> nota;
       acum=acum+nota;
    }
    promedio = (acum / 5);
    cout << "Su promedio es de: "<< promedio;
    
    return 0;
}