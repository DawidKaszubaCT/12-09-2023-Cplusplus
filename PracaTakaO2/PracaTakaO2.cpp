

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    //Zapis i tworzenie pliku
    //--------------------------------------------------------------------------------------
    fstream plik;
    char tresc[100];
    plik.open("artykul.txt", ios::in | ios::out | ios::trunc);
    cout << "Wprowadz artykul: " << endl;
    cin.getline(tresc, 100, '\n');

    plik << tresc;

    plik.close();
    //-------------------------------------------------------------------------------------
    //wczytywanie danych z pliku artykul.txt

    ifstream plikOdczyt;

    plikOdczyt.open("artykul.txt");

    if (plikOdczyt.is_open()) {
        string linia, zawartosc;
            char znak;
        while (!plikOdczyt.eof())
        {
            znak = plikOdczyt.get();
            if (plikOdczyt.good()) cout << znak << endl;
        }
    }

    system("pause");

    EXIT_SUCCESS;
}