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

Important::~Important() = default;



void Important::addNote(Note* newNote) {
    noteList.push_back(newNote);
    newNote->setIsImportant(true);
    newNote->subscribe(this);
    numElements++;
}


void Important::removeNote(int n) {
    int i=0;
    for(auto itr=noteList.begin();itr!=noteList.end();itr++){
        i++;
        if(i==n){
            (*itr)->unsubscribe(this);
            (*itr)->setIsImportant(false);
            numElements--;
            noteList.erase(itr);
            itr=noteList.end();
        }
    }
}

void Important::modifyNote(int n, std::string& title, std::string& text) {
    int i=0;
    for(auto & itr : noteList){
        i++;
        if(i==n)
            itr->modifyNote(title,text);
    }
}

std::string Important::getName() {return name;}
void Important::setName(std::string& n) { name=n;}

std::list<Note*> Important::getNoteList() {return noteList;}

int Important::getNumElements() const {
    return numElements;
}

void Important::updateDelete(Note &note) {
    noteList.remove(&note);
    numElements--;
}

