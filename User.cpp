//
// Created by alberto on 15/09/20.
//

#include "User.h"

void User::addCollection(Collection *C) {
    collections.push_back(C);
}

void User::removeCollection(Collection *C) {
    collections.remove(C);
}

void User::printDownloaded(Library *L) {
    lib = L;
    for(auto it : lib.)
}

void User::printType(Library *L, string type) {

}

