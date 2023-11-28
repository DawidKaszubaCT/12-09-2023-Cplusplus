#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    srand(time(NULL));
    clock_t start, stop;


    start = clock();

    cout << "Dynamiczne przydzielanie pamieci dla tablic - WSKAZNIKI" << endl;
    int rozmiarTablicy;
    int los;
    cout << "Podaj rozmiar tablicy = "; cin >> rozmiarTablicy;
    int* tablica;
    tablica = new int[rozmiarTablicy];

    for (int i = 0; i < rozmiarTablicy; i++) {
        los = rand() % 100 + 1;
        tablica[i] = los;
    }

    for (int i = 0; i < rozmiarTablicy; i++)
    {
        cout << "Index nr " << i << " = " << tablica[i] << " Adres komorki: " << (int)&tablica[i] << endl;
    }

    stop = clock();

    double czaswyswietlaniaAplikacji = (double)(stop - start) / CLOCKS_PER_SEC;

    cout << "Czas wyswietlania:" << czaswyswietlaniaAplikacji << endl;

    return EXIT_SUCCESS;
    //napisz program na konsole który przydziela(losuje) z zakresu od 0 do 100 wartości znaków z tablicy asci, znaki przypisz do tablicy oraz je wyświetl
}