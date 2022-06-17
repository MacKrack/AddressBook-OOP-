//#ifndef ADRESATMENEDZER_H
//#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"


using namespace std;

class AdresatMenedzer
{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);

    PlikZAdresatami plikZAdresatami;
    MetodyPomocnicze metodyPomocnicze;

public:

    int dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);


};

//#endif
