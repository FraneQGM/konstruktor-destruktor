#ifndef SAMOCHODY_H
#define SAMOCHODY_H

#include <string>

using namespace std;

class Pojazd
{
private:
    string marka;
    int rokProdukcji;
    int predkosc;

public:
    Pojazd(string m, int rok, int pred);

    string getMarka();
    int getRokProdukcji();
    int getPredkosc();

    void setPredkosc(int nowaPredkosc);
    void pokaz();
};

class Samochod : public Pojazd
{
private:
    string model;
    int liczbaDrzwi;
    int moc;

public:
    Samochod(string m, int rok, int pred,
             string mod, int drzwi, int mocSilnika);

    string getModel();
    int getLiczbaDrzwi();
    int getMoc();

    void pokazSamochod();
};

#endif
