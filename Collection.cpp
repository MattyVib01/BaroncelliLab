//
// Created by MattyVib01 on 29/01/2022.
//

#include "Collection.h"

Collection::Collection(std::string n):name(n){}

void Collection::addNote(std::unique_ptr<Note> newNote) {
    bool isInsert= false;
    for(auto itr=noteList.begin();itr!=noteList.end();itr++){
        if((*itr)== nullptr){
            noteList.insert(itr,newNote);
            isInsert=true;
        }
    }
   if(isInsert==false)
        noteList.push_back(newNote);
}


void Collection::deleteNote(int n) {
    noteList.erase(noteList.begin()+n);
}
