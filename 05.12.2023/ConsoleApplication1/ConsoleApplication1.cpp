﻿
#include <iostream>
using namespace std;
int main()
{

    int rozmiar;


    cout << "Podaj rozmiar tablicy imion : "; cin >> rozmiar;
    string *imiona = new string[rozmiar];
    for (size_t i = 0; i < rozmiar; i++)
    {
        cout << "Podaj imie " << i << " = "; cin >> imiona[i];
    }

    for (size_t i = 0; i < rozmiar; i++) {
        if (i == 2)  cout << imiona[i];
        else cout << imiona[i] << ", ";
    }

    return EXIT_SUCCESS;
}