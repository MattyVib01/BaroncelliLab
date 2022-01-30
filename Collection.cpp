//
// Created by MattyVib01 on 29/01/2022.
//

#include "Collection.h"

Collection::Collection(std::string n):name(n){}


void Collection::printCollection() {
    int i=0;
    for(auto itr=noteList.begin();itr!=noteList.end();itr++){
        i++;
        std::cout<<"Nota "<<i<<"\nTitolo: "<<(*itr)->getTitle()<<"\nTesto: "<<(*itr)->getText()<<std::endl;
    }
}


void Collection::addNote(std::unique_ptr<Note> newNote) {
    noteList.push_back(newNote);
}


void Collection::deleteNote(int n) {
    int i=0;
    for(auto itr=noteList.begin();itr!=noteList.end();itr++){
        i++;
        if(i==n&&(!(*itr)->isBlocked()))
        noteList.erase(itr);
    }
}

void Collection::modifyNote(int n, std::string title, std::string text) {
    int i=0;
    for(auto itr=noteList.begin();itr!=noteList.end();itr++){
        i++;
        if(i==n&&(!(*itr)->isBlocked())){
            (*itr)->setTitle(title);
            (*itr)->setText(text);
        }
    }
}
