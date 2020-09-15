//
// Created by alberto on 15/09/20.
//

#ifndef UNTITLED_COLLECTION_H
#define UNTITLED_COLLECTION_H
#include "Film.h"
#include <iostream>

using namespace std;

class Collection {
public:
    void addFilm(Film* F);

    void removeFilm(string N);

    void printDownloaded(Collection* C);

    void printType(Collection* C, string type);
private:
    string Cname;
    list<Film*> collection;
};


#endif //UNTITLED_COLLECTION_H
