#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>

using namespace std;

class Adresat {
    int id;
    int idUzytkownika;
    string imie;
    string nazwisko;
    string numerTelefonu;
    string email;
    string adres;

public:
    Adresat (int id = 0, int idUzytkownika = 0, string imie = "", string nazwisko = "", string numerTelefonu = "", string email = "", string adres = "") {
        this -> id = id;
        this -> idUzytkownika = idUzytkownika;
        this -> imie = imie;
        this -> nazwisko = nazwisko;
        this -> numerTelefonu = numerTelefonu;
        this -> email = email;
        this -> adres = adres;
    }

    int pobierzId();
    int pobierzIdUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTelefonu();
    string pobierzEmail();
    string pobierzHaslo();
    string pobierzAdres();
    void ustawId(int noweId);
    void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
    void ustawImie(string noweImie);
    void ustawNazwisko(string noweNazwisko);
    void ustawNumerTelefonu(string nowyNumerTelefonu);
    void ustawEmail(string nowyEmail);
    void ustawAdres(string nowyAdres);
};

#endif
