
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    //wykorzystanie wskaznika dynamicznego przydzielania pamięci RAM tablicy
    //pierwszy index tablicy przechowuje adres tablicy
    int tablica[5] = { 1, 2, 3, 4, 5 };

    cout << "tablica =" << tablica << endl;//adres zmiennej tablicowej = tablica
    cout << "&tablica = " << &tablica << endl;//adres zmiennej tablicowej = tablica
    cout << "&tablica[0]" << tablica[0] << endl;//adres zmiennej tablicowej = tablica + 4 bajty
    cout << "&tablica[1]" << tablica[1] << endl;//adres zmiennej tablicowej = tablica + 4 bajty
    cout << "&tablica[2]" << tablica[2] << endl;//adres zmiennej tablicowej = tablica + 4 bajty
    cout << "&tablica[3]" << tablica[3] << endl;//adres zmiennej tablicowej = tablica + 4 bajty
    cout << "&tablica[4]" << tablica[4] << endl << endl; //adres zmiennej tablicowej = tablica + 4 bajty


    // wniosek że lokalna pamięć dla kolejnych indexów w pamięci jest uporządkowana

    cout << "(int)&tablica[0] = " << (int)&tablica[0] << endl; //adres zmiennej tablicowej = tablica 
    cout << "(int)&tablica[0] = " << (int)&tablica[1] << endl; //adres zmiennej tablicowej = tablica + 4 bajty
    cout << "(int)&tablica[0] = " << (int)&tablica[2] << endl; //adres zmiennej tablicowej = tablica + 4 bajty
    cout << "(int)&tablica[0] = " << (int)&tablica[3] << endl; //adres zmiennej tablicowej = tablica + 4 bajty
    cout << "(int)&tablica[0] = " << (int)&tablica[4] << endl; //adres zmiennej tablicowej = tablica + 4 bajty

    //--------------------------------------------------------------------------------------
    //---------------Tworzę wskażnik, który będzie przechowywał adres tablicy
    int* wsk;
    wsk = &tablica[0]; //adres tablicy przypisujemy przez podanie adresu do pierwszego elementu tablicy
    //Teraz operacje na wskażniku czyli przesunięcie bitu
    cout << endl << endl;
    cout << "przesunięcie o 2x 4 bajty = " << (int)(wsk += 2) << endl;
    cout << "przesunięcie o kolejne 2= " << (int)(wsk += 2) << endl;
    cout << "przesunięcie o kolejne 2 wyjdziemy poza adresy el. tablicy = " << (int)(wsk += 2) << endl;

    //zadanie domowe = to samo co ^ ale na stringach

}
