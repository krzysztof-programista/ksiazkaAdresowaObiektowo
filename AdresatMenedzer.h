#ifndef ADRESAT_MENEDZER
#define ADRESAT_MENEDZER

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer
{
    int idZalogowanegoUzytkownika;

    vector <Adresat> adresaci;

    PlikZAdresatami plikZAdresatami;

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {
        idZalogowanegoUzytkownika = 0;
    };

    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);

    void dodajAdresata();
    Adresat podajDaneNowegoAdresata();
    void dopiszAdresataDoPliku(Adresat adresat);

    int pobierzIdOstatniegoAdresata();

    void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
    static int pobierzIdZalogowanegoUzytkownika();
};

#endif
