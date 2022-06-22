#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");

    //MENU LOGOWANIA / REJESTRACJI U¯YTKOWNIKA:

    ksiazkaAdresowa.rejestracjaUzytkownika();

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    //PO ZALOGOWANIU PLIK AUTOMATYCZNIEWCZYTUJE KONTAKTY UZYTKOWNIKA
    ksiazkaAdresowa.logowanieUzytkownika();

    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    ksiazkaAdresowa.dodajAdresata();

    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    ksiazkaAdresowa.wylogowywanieUzytkownika();

    //PO WYLOGOWANIU WYSTWIETLAM VECTORY DLA SPRAWDZENIA CZY ZOSTALY WYCZYSZCZONE

//    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
//
//    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    return 0;
}
