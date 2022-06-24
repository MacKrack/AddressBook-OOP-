#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");

    //MENU LOGOWANIA / REJESTRACJI UZYTKOWNIKA:

//    ksiazkaAdresowa.rejestracjaUzytkownika();
//
//    ksiazkaAdresowa.rejestracjaUzytkownika();
//
//    ksiazkaAdresowa.rejestracjaUzytkownika();

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    //PO ZALOGOWANIU PLIK AUTOMATYCZNIE WCZYTUJE KONTAKTY UZYTKOWNIKA

    ksiazkaAdresowa.logowanieUzytkownika();

    ksiazkaAdresowa.dodajAdresata();

    ksiazkaAdresowa.dodajAdresata();

    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    ksiazkaAdresowa.wylogowywanieUzytkownika();

    ksiazkaAdresowa.logowanieUzytkownika();

    ksiazkaAdresowa.dodajAdresata();

    ksiazkaAdresowa.dodajAdresata();

    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    ksiazkaAdresowa.wylogowywanieUzytkownika();

    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();

    //PO WYLOGOWANIU WYSTWIETLAM VECTORY DLA SPRAWDZENIA CZY ZOSTALY WYCZYSZCZONE

//    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
//
//    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    return 0;
}
