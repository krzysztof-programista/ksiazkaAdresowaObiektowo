#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>

using namespace std;

class Adresat
{
    int id;
    int idUzytkownika;
    string imie;
    string nazwisko;
    string numerTelefonu;
    string email;
    string adres;


public:
    void ustawId (int noweId);
    void ustawIdUzytkownika (int noweIdUyztkownika);
    void ustawImie (string nowyLogin);
    void ustawNazwisko (string noweHaslo);
    void ustawNumerTelefonu (string nowyLogin);
    void ustawEmail (string noweHaslo);
    void ustawAdres (string noweHaslo);

    int pobierzId();
    int pobierzIdUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTelefonu();
    string pobierzEmail();
    string pobierzAdres();

};

#endif
