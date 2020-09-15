#include <iostream>
#include "Library.h"
#include "User.h"

using namespace std;

int main() {
    User person("Alberto");

    Film film1("L'era Glaciale",2002,"Cris Wedge");
    film1.addType("Animazione");
    film1.addType("Per famiglie");

    Film film2("Titanic",1997,"James Cameron");
    film2.addType("Amore");

    Film film3("I mercenari 3",2014,"Patrick Hughes");
    film3.addType("Azione");
    film3.addType("Avventura");

    Film film4("Revenant",2015,"Alejandro Gonzalez Inarritu");
    film4.addType("Avventura");

    Library lib;

    lib.addFilm(&film1);
    lib.addFilm(&film2);
    lib.addFilm(&film3);
    lib.addFilm(&film4);

    Collection col1;
    Collection col2;

    col1.addFilm(&film1);
    col1.addFilm(&film3);

    col2.addFilm(&film1);
    col2.addFilm(&film4);

    person.addCollection(&col2);
    person.addCollection(&col1);
    person.printT("Avventura");



}
