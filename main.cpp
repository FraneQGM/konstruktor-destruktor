#include <iostream>
#include "samochody.h"

using namespace std;

int main()
{

    Samochod auto1("Toyota", 2024, 0,
                   "Corolla", 5, 140);

    Samochod auto2("Toyota", 2023, 0,
                   "RAV4", 5, 175);

    Samochod auto3("Lexus", 2022, 0,
                   "RX", 5, 250);

    cout << "===== SAMOCHOD 1 =====" << endl;
    auto1.pokazSamochod();

    cout << endl;

    cout << "===== SAMOCHOD 2 =====" << endl;
    auto2.pokazSamochod();

    cout << endl;

    cout << "===== SAMOCHOD 3 =====" << endl;
    auto3.pokazSamochod();

    cout << endl;

    Samochod mojSamochod("BMW", 2025, 0,
                         "M3", 4, 510);

    cout << "===== MOJ SAMOCHOD =====" << endl;
    mojSamochod.pokazSamochod();

    cout << endl;


    cout << "Ustawiam predkosc na 120 km/h..." << endl;
    mojSamochod.setPredkosc(120);

    cout << "Nowa predkosc: "
         << mojSamochod.getPredkosc()
         << " km/h" << endl;

    cout << endl;

    cout << "Proba ustawienia nieprawidlowej predkosci: -50 km/h"
         << endl;

    mojSamochod.setPredkosc(-50);

    cout << "Predkosc po blednej probie: "
         << mojSamochod.getPredkosc()
         << " km/h" << endl;
    return 0;
}
