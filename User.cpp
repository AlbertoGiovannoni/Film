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

void User::printD() const {
    for(auto it : collections)
        it->printDownloaded();
}

void User::printT(string t) const {
    for(auto it : collections)
        it->printType(t);

}


