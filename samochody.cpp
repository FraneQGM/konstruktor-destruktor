#include "samochody.h"
#include <iostream>

using namespace std;

Pojazd::Pojazd(string m, int rok, int pred)
{
    marka = m;
    rokProdukcji = rok;
    predkosc = pred;
}

string Pojazd::getMarka()
{
    return marka;
}

int Pojazd::getRokProdukcji()
{
    return rokProdukcji;
}

int Pojazd::getPredkosc()
{
    return predkosc;
}

void Pojazd::setPredkosc(int nowaPredkosc)
{
    if (nowaPredkosc >= 0 && nowaPredkosc <= 250)
    {
        predkosc = nowaPredkosc;
    }
    else
    {
        cout << "Blad! Predkosc musi byc od 0 do 250 km/h."
             << endl;
    }
}

void Pojazd::pokaz()
{
    cout << "Marka: " << marka << endl;
    cout << "Rok produkcji: " << rokProdukcji << endl;
    cout << "Predkosc: " << predkosc << " km/h" << endl;
}

Samochod::Samochod(string m, int rok, int pred,
                   string mod, int drzwi, int mocSilnika)
    : Pojazd(m, rok, pred)
{
    model = mod;
    liczbaDrzwi = drzwi;
    moc = mocSilnika;
}

string Samochod::getModel()
{
    return model;
}

int Samochod::getLiczbaDrzwi()
{
    return liczbaDrzwi;
}

int Samochod::getMoc()
{
    return moc;
}

void Samochod::pokazSamochod()
{
    cout << "Marka: " << getMarka() << endl;
    cout << "Model: " << model << endl;
    cout << "Rok produkcji: " << getRokProdukcji() << endl;
    cout << "Liczba drzwi: " << liczbaDrzwi << endl;
    cout << "Moc: " << moc << " KM" << endl;
    cout << "Predkosc: " << getPredkosc() << " km/h" << endl;
}
