//
// Created by MattyVib01 on 29/01/2022.
//

#ifndef BARONCELLILAB_COLLECTION_H
#define BARONCELLILAB_COLLECTION_H
#include <iostream>
#include "Note.h"
#include <list>
#include <memory>


class Collection {
public:
    Collection(std::string n);

    void printCollection();     //stampa numero titolo e testo di ogni nota nella collezione

    void addNote(std::shared_ptr<Note>);        //aggiunge una nota alla collezione

    void removeNote(int n);                 //rimuove una nota dalla collezione

    void modifyNote(int n, std::string title, std::string text);    //permette di modificare una nota dalla collezione

    std::string getName();
    void setname(std::string n);

    std::list<std::shared_ptr<Note>> getNoteList();


private:
    std::string name;
    std::list<std::shared_ptr<Note>> noteList;

};


#endif //BARONCELLILAB_COLLECTION_H
