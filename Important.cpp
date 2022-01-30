//
// Created by MattyVib01 on 30/01/2022.
//

#include "Important.h"

Important* Important::instance= nullptr;

Important::Important() {}

Important * Important::getInstance() {
    if(instance== nullptr)
        instance=new Important;
    return instance;
}

void Important::printCollection() {
    int i=0;
    std::cout<<"Nome collezione: "<<this->getName()<<"\n"<<std::endl;
    for(auto itr=noteList.begin();itr!=noteList.end();itr++){
        i++;
        std::cout<<"Nota "<<i<<std::endl;
        (*itr)->printNote();
    }
}


void Important::addNote(Note* newNote) {
    noteList.push_back(newNote);
}


void Important::removeNote(int n) {
    int i=0;
    for(auto itr=noteList.begin();itr!=noteList.end();itr++){
        i++;
        if(i==n){
            noteList.erase(itr);
            std::cout<<"Collezione aggiornata"<<std::endl;
            this->printCollection();
            itr=noteList.end();
        }
    }
}

void Important::modifyNote(int n, std::string title, std::string text) {
    int i=0;
    for(auto itr=noteList.begin();itr!=noteList.end();itr++){
        i++;
        if(i==n)
            (*itr)->modifyNote(title,text);
    }
}

std::string Important::getName() {return name;}
void Important::setname(std::string n) {name=n;}

std::list<Note*> Important::getNoteList() {return noteList;}

