#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");

    //MENU LOGOWANIA / REJESTRACJI U¯YTKOWNIKA:

    ksiazkaAdresowa.rejestracjaUzytkownika();

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    ksiazkaAdresowa.logowanieUzytkownika();

//    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
//
//    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
//
//    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
//
//    ksiazkaAdresowa.dodajAdresata();
//
//    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
//
//    ksiazkaAdresowa.wylogowywanieUzytkownika();
//
//    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
//
//    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    return 0;
}
