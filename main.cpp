#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int _main()
{

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    //MENU LOGOWANIA / REJESTRACJI UZYTKOWNIKA:

//    ksiazkaAdresowa.rejestracjaUzytkownika();
//
//    ksiazkaAdresowa.rejestracjaUzytkownika();
//
    ksiazkaAdresowa.rejestracjaUzytkownika();

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


//TESTY AdresatMenedzer

#include "AdresatMenedzer.h"

int testAdresatMenedzer_main()
{
    AdresatMenedzer adresatMenedzer("Adresaci.txt",2);
    adresatMenedzer.wyswietlWszystkichAdresatow();
    adresatMenedzer.dodajAdresata();
    adresatMenedzer.wyswietlWszystkichAdresatow();


}


// TESTY PlikZAdresatami
#include "Adresat.h"
#include "PlikZAdresatami.h"

int main()
{
 PlikZAdresatami plikZAdresatami("Adressaci-test1.txt");
 Adresat adresat(1,2,"Sss","Sss","sss","sss","sss");

 plikZAdresatami.dopiszAdresataDoPliku(adresat);
 cout << plikZAdresatami.pobierzIdOstatniegoAdresata();
}
