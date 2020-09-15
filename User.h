//
// Created by alberto on 15/09/20.
//

#ifndef UNTITLED_USER_H
#define UNTITLED_USER_H
#include "Collection.h"

#include <iostream>

using namespace std;


class User {
public:
    User(string name) : Uname(name) {};
    void addCollection(Collection* C);

    void removeCollection(Collection* C);


private:
    string Uname;
    list<Collection*> collections;

};


#endif //UNTITLED_USER_H
