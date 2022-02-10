//
// Created by MattyVib01 on 29/01/2022.
//

#include "Collection.h"

Collection::Collection(std::string n):name(n){
    std::list<Note*> nl;
    noteList=nl;
}

Collection::~Collection(){}

void Collection::printCollection() {
    int i=0;
    std::cout<<"Nome collezione: "<<this->getName()<<"\n"<<std::endl;
    for(auto itr=noteList.begin();itr!=noteList.end();itr++){
        i++;
        std::cout<<"Nota "<<i<<std::endl;
        (*itr)->printNote();
    }
}


void Collection::addNote(Note* newNote) {
    noteList.push_back(newNote);
    newNote->subscribe(this);
    numElements++;
}


void Collection::removeNote(int n) {
    int i=0;
    for(auto itr=noteList.begin();itr!=noteList.end();itr++){
        i++;
        if(i==n){
            (*itr)->unsubscribe(this);
            numElements--;
            noteList.erase(itr);
            std::cout<<"Collezione aggiornata"<<std::endl;
            this->printCollection();
            itr=noteList.end();
        }
    }
}

void Collection::modifyNote(int n, std::string title, std::string text) {
    int i=0;
    for(auto itr=noteList.begin();itr!=noteList.end();itr++){
        i++;
        if(i==n)
            (*itr)->modifyNote(title,text);
    }
}

std::string Collection::getName() const {return name;}
void Collection::setname(std::string n) {name=n;}
int Collection::getNumElements() const{return numElements;}
void Collection::setNumElements(int n) {numElements=n;}

std::list<Note*> Collection::getNoteList() const {return noteList;}

void Collection::updateDelete(Note& note) {
    noteList.remove(&note);
    numElements--;
}

