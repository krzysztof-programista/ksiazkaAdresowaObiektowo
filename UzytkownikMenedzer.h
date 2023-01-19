#ifndef UZYTKOWNIK_MENEDZER
#define UZYTKOWNIK_MENEDZER

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikMenedzer
{
    int idZalogowanegoUzytkownika;

    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);

    PlikZUzytkownikami plikZUzytkownikami;


public:
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami) {
        idZalogowanegoUzytkownika = 0;
        uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();;
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    bool czyUzytkownikJestZalogowany();

    char wybierzOpcjeZMenuUzytkownika();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();

    int pobierzIdZalogowanegoUzytkownika();


};

#endif
