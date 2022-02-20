//
// Created by MattyVib01 on 29/01/2022.
//

#include "Collection.h"

Collection::Collection(std::string n):name(n){
    std::list<Note*> nl;
    noteList=nl;
}

Collection::Collection() {
    name="Senza nome";
}
Collection::~Collection()= default;

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
            itr=noteList.end();
        }
    }
}

void Collection::modifyNote(int n, std::string& title, std::string& text) {
    int i=0;
    for(auto & itr : noteList){
        i++;
        if(i==n)
            itr->modifyNote(title,text);
    }
}

bool Collection::searchNote(Note &note) {
    for(auto & itr : noteList){
        if(note.getTitle()==(*itr).getTitle()&&note.getText()==(*itr).getText())
            return true;
    }
    return false;
}
std::string Collection::getName() const {return name;}
void Collection::setName(std::string& n) { name=n;}
int Collection::getNumElements() const{return numElements;}

std::list<Note*> Collection::getNoteList() const {return noteList;}

void Collection::updateDelete(Note& note) {
    noteList.remove(&note);
    numElements--;
}

