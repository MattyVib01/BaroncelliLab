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
    //costruttore
    explicit Collection(std::string n);
    Collection();
    //distruttore
    ~Collection() override;
    //aggiunge una nota alla collezione
    virtual void addNote(Note* newNote);
    //rimuove una nota dalla collezione
    virtual void removeNote(int n);
    //modifica una nota della collezione indicandone il numero (se non è bloccata)
    virtual void modifyNote(int n, std::string& title, std::string& text);
    //restituisce true se la nota è presente nella collezione, false altrimenti
    bool searchNote(Note& note);

    //metodi getter e setter
    std::string getName() const;
    void setName(std::string& n);
    std::list<Note*> getNoteList() const;

    //metodi design pattern observer
    void updateDelete(Note &note) override;



private:
    std::string name;
    std::list<Note*> noteList;
};


#endif //BARONCELLILAB_COLLECTION_H
