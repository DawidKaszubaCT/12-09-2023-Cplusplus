#include <iostream>
using namespace std;

class Pojazdy {
private:
    string name;
public:
    Pojazdy(string name) {
        this->name = name;
    }
    void prezentacjaPojazdu() {
        cout << "Prezentacja pojazdu; " << this->name << endl;
    }
};

class Samochody : public Pojazdy {
private:
    string marka;
    string nazwa;
public:
    Samochody(string m, string n):Pojazdy(n) {
        this->marka = m;
        this->nazwa = n;
    }
    void prezentacjaSamochodu() {
        cout << "Prezentacja samochodu" << this->marka << endl;
        cout << "nazwa pojazdu" << this->nazwa << endl;
    }
};
int main()
{
    Samochody vw = Samochody("VW", "PASSAT");

    vw.prezentacjaPojazdu();
    vw.prezentacjaSamochodu();
    


    return EXIT_SUCCESS;
}
