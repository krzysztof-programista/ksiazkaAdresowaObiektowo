#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    char wybor;

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy2.txt", "Adresaci.txt");

    while (true)
        {
            if (ksiazkaAdresowa.czyUzytkownikJestZalogowany() == false)
            {
                wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

                switch (wybor)
                {
                case '1':
                    ksiazkaAdresowa.rejestracjaUzytkownika();
                    break;
                case '2':
                    ksiazkaAdresowa.logowanieUzytkownika();
                    break;
                case '9':
                    exit(0);
                    break;
                default:
                    cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                    system("pause");
                    break;
                }
            }
            else
            {

                ksiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownikaZPliku();

                wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

                switch (wybor)
                {
                case '1':
                    ksiazkaAdresowa.dodajAdresata();
                    break;
                case '4':
                    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                    break;
                case '7':
                    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                    break;
                case '8':
                    ksiazkaAdresowa.wylogowanieUzytkownika();
                    break;
                default:
                    cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                    system("pause");
                    break;
                }
            }
        }

    return 0;
}
