
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int liczba1 = 10;
    int liczba2 = 20;

    int dodawanie = liczba1 + liczba2;
    int odejmowanie = liczba1 - liczba2;
    int mnozenie = liczba1 * liczba2;
    float dzielenie = (float)liczba1 / (float)liczba2;
    float pierwiastekliczby1 = sqrt(liczba1);
    float pierwiastekliczby2 = sqrt(liczba2);
    double potegaliczby1 = pow(liczba1, 2);
    double potegaliczby2 = pow(liczba2, 2);

    cout << "Dodwanie = " << dodawanie << endl;
    cout << "Odejmowanie = " << odejmowanie << endl;
    cout << "Mnożenie = " << mnozenie << endl;
    cout << "Dzielenie = " << dzielenie << endl;
    cout << "Pierwiastek z liczby 1 = " << pierwiastekliczby1 << endl;
    cout << "Pierwiastek z liczby 2 = " << pierwiastekliczby2 << endl;
    cout << "Potęgaa liczby 1 = " << potegaliczby1 << endl;
    cout << "Potęga liczby 2 = " << potegaliczby2 << endl;

    system("pause");
    
    return 0;
}
/*
Przestrzeń nazw: using namespace co to jest i dlaczego stosujemy
Typy danych w c++, proste i złożone
Typyp proste: Integer int - liczby całkowite, string typ tekstowy, Char, typ znakowu, float i double liczby zmienne
*/