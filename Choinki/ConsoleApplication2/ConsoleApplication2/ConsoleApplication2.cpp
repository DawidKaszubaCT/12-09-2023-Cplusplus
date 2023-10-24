
#include <iostream>
using namespace std;
int main()
{
   /*
   
   Zad1.
  * * * * *
  * * * * *
  * * * * *
  * * * * *
   
   */
    /*Jeśli mamy tablice 2D to stosuje dwie pętle*/
    for (size_t wiersz = 0; wiersz < 4; wiersz++)
    {
        for (int kolumna = 0; kolumna < 5; kolumna++) {
            cout << "* ";
        }
        cout << "\n";
    };
    return 0;
}