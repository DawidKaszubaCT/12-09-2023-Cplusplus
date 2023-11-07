
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    //Wczytywanie zkonkretnych znaków z pliku od znaku X do Y
    fstream plik;
    char tresc[100];
    plik.open("artykul.txt", ios::out);

    if (plik.good()) {
        plik.seekg(9);
        //plik.read(tresc, 4);
    }
    else {
        cout << "Plik nie istnieje" << endl;
    }
    plik.close();

    system("pause");

    EXIT_SUCCESS;
}