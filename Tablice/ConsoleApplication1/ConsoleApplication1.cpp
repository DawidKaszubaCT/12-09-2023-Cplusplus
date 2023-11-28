#include <iostream>
#include <time.h>
using namespace std;
int main()
{
  /*  setlocale(LC_ALL, "");
    int* tablica;
    int ile = 5;
    tablica = new int[ile];

    cout << "Dynamiczne Adresy do przydzielania 5 ale = " << (int)tablica << endl;
    cout << "Adres własny wskaznika tablica = " << (int)&tablica << endl;
    cout << (int)&tablica[0] << endl;
    cout << (int)&tablica[1] << endl;
    cout << (int)&tablica[2] << endl;
    cout << (int)&tablica[3] << endl;
    cout << (int)&tablica[4] << endl;

    // inny sposób wyświetlenia adresów z tablicy
    cout << endl << endl;
    for (int i = 0; i < ile; i++)
    {
        cout << (int)tablica << endl;
        tablica++;
    }
    //--------------------------------------------
    return 0;*/
    //Napisz app na konsole która losuje określoną ilość liczb i przypisuje do dynamicznej tablicy. Wyznacz sumę liczb średnią liczb
    //1.Podaj ile elementów losujemyy : 10
    //2. Wylosuj z zakresu od 0 do 100 10 liczb
    //3. Wyznacz sumę liczb i średnią liczb


    srand(time(NULL))
    return EXIT_SUCCESS;
}