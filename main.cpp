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















//TESTY AdresatMenedzer
#include "AdresatMenedzer.h"

int t3_main()
{
    AdresatMenedzer adresatMenedzer("Adresaci.txt", 2);
    adresatMenedzer.wyswietlWszystkichAdresatow();
    adresatMenedzer.dodajAdresata();
    adresatMenedzer.wyswietlWszystkichAdresatow();
}














//TESTY PlikZAdresatami
#include "Adresat.h"
#include "PlikZAdresatami.h"

int t4_main()
{
    PlikZAdresatami plikZAdresatami("Adresaci-test.txt");
    Adresat adresat1 (1, 9, "xxx", "xxx", "xxx", "xxx", "xxx");
    Adresat adresat2 (2, 9, "xxx", "xxx", "xxx", "xxx", "xxx");

    plikZAdresatami.dopiszAdresataDoPliku(adresat1);
    plikZAdresatami.dopiszAdresataDoPliku(adresat2);


    cout << plikZAdresatami.pobierzIdOstatniegoAdresata();
}









