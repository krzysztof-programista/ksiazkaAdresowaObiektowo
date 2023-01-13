#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"
#include "MetodyPomocnicze.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer adresatMenedzer;

public:

    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), adresatMenedzer(nazwaPlikuZAdresatami) {
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();

    };


    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wypiszWszystkichUzytkownikow();

    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    bool czyUzytkownikJestZalogowany();

    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void wyswietlWszystkichAdresatow();
    void dodajAdresata();

    int pobierzIdZalogowanegoUzytkownika();
    int pobierzIdOstatniegoAdresata();

};

#endif
