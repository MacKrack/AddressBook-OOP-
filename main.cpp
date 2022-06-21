#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");

    //Menu Logowania / Rejestracji Uzytkownika:

    ksiazkaAdresowa.rejestracjaUzytkownika();

    ksiazkaAdresowa.rejestracjaUzytkownika();

    ksiazkaAdresowa.rejestracjaUzytkownika();

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

//    ksiazkaAdresowa.logowanieUzytkownika();


//    ksiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
//
//
//    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
//
//    idOstatniegoAdresata = ksiazkaAdresowa.dodajAdresata(idZalogowanegoUzytkownika,idOstatniegoAdresata);
//    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

//    int idZalogowanegoUzytkownika = ksiazkaAdresowa.logowanieUzytkownika();

//    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
//
//    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
//

//


    //wylogowanie:
    //idZalogowanegoUzytkownika = 0;
    //adresaci.clear();

    return 0;
}
