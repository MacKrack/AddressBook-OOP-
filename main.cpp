#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");

    int idZalogowanegoUzytkownika = ksiazkaAdresowa.logowanieUzytkownika();
    int idOstatniegoAdresata;

    cout << idZalogowanegoUzytkownika << endl;
    system("pause");


    ksiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);

        cout << idZalogowanegoUzytkownika << endl;
    system("pause");

    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    idOstatniegoAdresata = ksiazkaAdresowa.dodajAdresata(idZalogowanegoUzytkownika,idOstatniegoAdresata);
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

//    int idZalogowanegoUzytkownika = ksiazkaAdresowa.logowanieUzytkownika();

//    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
//
//    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
//
//    ksiazkaAdresowa.rejestracjaUzytkownika();
//
//    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    //wylogowanie:
    //idZalogowanegoUzytkownika = 0;
    //adresaci.clear();

    return 0;
}
