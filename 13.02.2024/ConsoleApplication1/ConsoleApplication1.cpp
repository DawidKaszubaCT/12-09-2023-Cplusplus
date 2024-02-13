/*#include <iostream>
using namespace std;

class Robot {
public:
    string name;
    int serial_number;
    int digit;

    void runRobot() {
        if( digit == 1){
            showRobot();
        }
        else {
            messages();
        }
    }
    void showRobot()
    {
        cout << "Robot uruchomiony: " << serial_number << "Nazwa: " << name << endl;
    }
    void messages()
    {
        cout << "Robot nieuruchomiony" << endl;
    }
};


int main()
{
    int uruchomienie;
    cout << "Robot 1 - Start, inna wartość - Robot nie działa" << endl;
    cout << "Co chcesz zrobić - "; cin >> uruchomienie;
    cout << "---------------------------------------------" << endl;
    Robot mojrobocik;
    mojrobocik.digit = uruchomienie;
    mojrobocik.serial_number = 23456798765;
    mojrobocik.name = "Roomba";
    mojrobocik.runRobot();
}
*/
#include <iostream>
using namespace std;

class Machine {
public:
    string name;
    string co_robi;
    string isXbox;
    int digit;

    void runMachine() {
        showMachine();
    }
    void showMachine()
    {
        cout << "Maszyna uruchomiona bracie B) Nazwa: " << name << "Co robi: " << co_robi << endl;
    }
    void messages()
    {
        cout << "Maszyna nieuruchomiona" << endl;
    }
    void checkXbox()
    {
        if (isXbox == "tak")
        {
            cout << "Sigma xbox bratku" << endl;
        }
    }
};


int main()
{
    Machine mojamachina;
    int uruchomienie;
    int xbox;
    int uruchomienie2;
    cout << "Machina symulator :) : 1 - Start, inna wartosc - Czarnobyl" << endl;
    cout << "Co chcesz zrobic - "; cin >> uruchomienie;
    if (uruchomienie != 1)
    {
        cout << "O ty rusku przeklety" << endl;
        return EXIT_SUCCESS;
    }
    cout << "Co ona robi wogole? (bez spacji pls): "; cin >> mojamachina.co_robi;
    cout << "Xbox? - wproadz tak jeśli....tak: : "; cin >> xbox;
    cout << "---------------------------------------------" << endl;
    mojamachina.runMachine();
    mojamachina.checkXbox();
   
}