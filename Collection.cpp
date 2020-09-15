//
// Created by alberto on 15/09/20.
//

#include "Collection.h"

void Collection::download(Film *F) {
    bool inList = false;
    for (auto it : collection){
        if(F->getTitle() == it->getTitle()){
            cout << "Film già inserito" << endl;
            inList = true;
        }
    }
    if (!inList){
        collection.push_back(F);
        F->setDownloaded(true);
    }

}

void Collection::removeFilm(string N) {
    for(auto it : collection){
        if(it->getTitle() == N)
            collection.remove(it);
    }
}
