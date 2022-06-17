#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

class PlikZAdresatami
{
    string nazwaPlikuZAdresatami;

    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    bool czyPlikJestPusty(fstream &plikTekstowy);

    MetodyPomocnicze metodyPomocnicze;

    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);

    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);

public:
    PlikZAdresatami();
    void dopiszAdresataDoPliku(Adresat adresat);
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);


};

