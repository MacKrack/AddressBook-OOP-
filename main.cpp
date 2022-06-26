#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    //MENU LOGOWANIA / REJESTRACJI UZYTKOWNIKA:

    ksiazkaAdresowa.rejestracjaUzytkownika();

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    //PO ZALOGOWANIU PLIK AUTOMATYCZNIE WCZYTUJE KONTAKTY UZYTKOWNIKA

    ksiazkaAdresowa.logowanieUzytkownika();

    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();

    ksiazkaAdresowa.dodajAdresata();

    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    ksiazkaAdresowa.wylogowywanieUzytkownika();

    ksiazkaAdresowa.logowanieUzytkownika();

    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();

    ksiazkaAdresowa.dodajAdresata();

    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    ksiazkaAdresowa.wylogowywanieUzytkownika();

    ksiazkaAdresowa.logowanieUzytkownika();

    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();

    ksiazkaAdresowa.dodajAdresata();

    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    ksiazkaAdresowa.wylogowywanieUzytkownika();

    //PO WYLOGOWANIU WYSTWIETLAM VECTORY DLA SPRAWDZENIA CZY ZOSTALY WYCZYSZCZONE

    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    return 0;
}
