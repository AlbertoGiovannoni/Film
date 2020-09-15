//
// Created by alberto on 15/09/20.
//

#ifndef UNTITLED_LIBRARY_H
#define UNTITLED_LIBRARY_H
#include "Film.h"
#include <iostream>

using namespace std;
class Library {
public:
    void addFilm(Film* F);

    void removeFilm(string n);

    void searchTitle(string T);

    void searchType(string Ty);

private:
    list<Film*> library;
};


#endif //UNTITLED_LIBRARY_H
