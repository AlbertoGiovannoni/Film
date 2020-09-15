//
// Created by alberto on 15/09/20.
//

#include "Library.h"

void Library::addFilm(Film *F) {
    bool inList = false;
    for(auto it : library){
        if(F->getTitle() == it->getTitle()){
            cout<<" Già presente nella libreria " << endl;
            inList = true;

        }
    }
    if (!inList)
        library.push_back(F);
}

void Library::removeFilm(string n) {
    for(auto it : library){
        if(it->getTitle() == n)
            library.remove(it);
    }

}

void Library::searchTitle(string T) {
    bool found = false;
    for(auto it : library){
        if(it->getTitle() == T){
            cout << "Film presente nella libreria" << endl;
            found = true;
        }
    }
    if (!found)
        cout<< "Film non trovato" <<endl;
}

void Library::searchType(string Ty) {
    for( auto it : library){
        for (auto& itr : it->getType() )
            if(itr == Ty)
                cout << it->getTitle() << endl;
    }
}
