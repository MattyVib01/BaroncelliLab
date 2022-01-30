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

    void addNote(std::unique_ptr<Note>);

    void deleteNote(int n);

    void modifyNote(int n, std::string title, std::string text);


private:
    std::string name;
    std::list<std::unique_ptr<Note>> noteList;

};


#endif //BARONCELLILAB_COLLECTION_H
