
#include <iostream>
#include <math.h>

using namespace std;

float masa = 0;
float predkosc = 0;
float wysokosc = 0;

int main()
{
    cout << "Podaj mase w kg: ";
    cin >> masa;
    cout << "Podaj predkosc w km/h: ";
    cin >> predkosc;
    cout << "Podaj Odleglosc od ziemi obiektu w m: ";
    cin >> wysokosc;

    predkosc /= 3.6;

    float EnergiaKinetyczna = (masa * pow(predkosc, 2)) / 2;
    float EnergiaPotencjalna = masa * wysokosc * 10;

    cout << "Energia mechaniczna wynosi: " << EnergiaKinetyczna + EnergiaPotencjalna << "J";
    cout << "Energia kinetyczna wynosi: " << EnergiaKinetyczna << endl;
    cout << "Energia potencjalna wynosi: " << EnergiaPotencjalna << endl;
    cout << endl << endl;

    system("pause");

    return 0;
}
