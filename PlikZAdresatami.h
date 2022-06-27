#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>

#include "PlikTekstowy.h"
#include "Adresat.h"
#include "MetodyPomocnicze.h"

class PlikZAdresatami : public PlikTekstowy
{
    int idOstatniegoAdresata;

    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    void edytujWybranaLinieWPliku(string ciagZnakowDoZastapienia, string liniaZDanymiAdresataOddzielonePionowymiKreskami);

public:
    PlikZAdresatami(string nazwaPliku) : PlikTekstowy (nazwaPliku)
    {
        idOstatniegoAdresata = 0;
    };
    void dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzZPlikuIdOstatniegoAdresata();
    int pobierzIdOstatniegoAdresata();
    void usunWybranegoAdresataZPliku(string liniaDoUsuniecia, int idUsuwanegoAdresata);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    void zaktualizujDaneWybranegoAdresataWPliku(Adresat adresat, string ciagZnakowDoZastapienia);
};

#endif
