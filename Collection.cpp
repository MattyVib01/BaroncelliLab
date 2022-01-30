//
// Created by MattyVib01 on 29/01/2022.
//

#include "Collection.h"

Collection::Collection(std::string n):name(n){
    std::list<std::shared_ptr<Note>> nl;
    noteList=nl;
}


void Collection::printCollection() {
    int i=0;
    std::cout<<"Nome collezione: "<<this->getName()<<std::endl;
    for(auto itr=noteList.begin();itr!=noteList.end();itr++){
        i++;
        std::cout<<"Nota "<<i<<"\nTitolo: "<<(*itr)->getTitle()<<"\nTesto: "<<(*itr)->getText()<<std::endl;
    }
}


void Collection::addNote(std::shared_ptr<Note> newNote) {
    noteList.push_back(newNote);
}


void Collection::removeNote(int n) {
    int i=0;
    for(auto itr=noteList.begin();itr!=noteList.end();itr++){
        i++;
        if(i==n) {
            noteList.erase(itr);
            std::cout<<"Collezione aggiornata"<<std::endl;
            this->printCollection();
        }
    }
}

void Collection::modifyNote(int n, std::string title, std::string text) {
    int i=0;
    for(auto itr=noteList.begin();itr!=noteList.end();itr++){
        i++;
        if(i==n){
            (*itr)->modifyNote(title,text);
        }
    }
}

std::string Collection::getName() {return name;}
void Collection::setname(std::string n) {name=n;}

std::list<std::shared_ptr<Note>> Collection::getNoteList() {return noteList;}
