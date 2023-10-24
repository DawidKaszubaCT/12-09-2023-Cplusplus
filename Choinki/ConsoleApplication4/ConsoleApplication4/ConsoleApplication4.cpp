
#include <iostream>
using namespace std;
int main()
{
    /*

    Zad1.
   & * * * &
   * * @ * *
   * * @ * *
   & * * * &

    */
    /*Jeśli mamy tablice 2D to stosuje dwie pętle*/
    for (int wiersz = 0; wiersz < 4; wiersz++)

    {
        for (int kolumna = 0; kolumna < 5; kolumna++) {

           if (wiersz == 0) {
               if (kolumna == 0 or kolumna == 4)
               {
                   cout << "& ";
               }
               else
               {
                   cout << "* ";
               }
            }
           else if (wiersz == 1) {
               if (kolumna == 2)
               {
                   cout << "@ ";
               }
               else
               {
                   cout << "* ";
               }
                }
           else if (wiersz == 2) {
               if (kolumna == 2)
               {
                   cout << "@ ";
               }
               else
               {
                   cout << "* ";
               }
                }
           else if (wiersz == 3) {
               if (kolumna == 0 or kolumna == 4)
               {
                   cout << "& ";
               }
               else
               {
                   cout << "* ";
               }
               }
        }
        cout << "\n";
    };
    return 0;
}