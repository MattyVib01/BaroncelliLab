//
// Created by MattyVib01 on 29/01/2022.
//

#ifndef BARONCELLILAB_COLLECTION_H
#define BARONCELLILAB_COLLECTION_H
#include <iostream>
#include <list>
#include <memory>
#include "Observer.h"
#include "Note.h"

class Subject;


class Collection: public Observer {
public:
    explicit Collection(std::string n);

    void printCollection();     //stampa numero titolo e testo di ogni nota nella collezione

    void addNote(Note* newNote);        //aggiunge una nota alla collezione

    void removeNote(int n);                 //rimuove una nota dalla collezione

    void modifyNote(int n, std::string title, std::string text);    //permette di modificare una nota dalla collezione

    std::string getName() const;
    void setname(std::string n);
    int getNumElements() const;
    void setNumElements(int n);

    std::list<Note*> getNoteList()const;

    void updateDelete(Note &note) override;
    ~Collection();


private:
    std::string name;
    std::list<Note*> noteList;
    int numElements=0;

};


#endif //BARONCELLILAB_COLLECTION_H
