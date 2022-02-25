//
// Created by MattyVib01 on 30/01/2022.
//

#ifndef BARONCELLILAB_IMPORTANT_H
#define BARONCELLILAB_IMPORTANT_H
#include <iostream>
#include "Observer.h"
#include "Note.h"
#include "Collection.h"

class Subject;


class Important: public Collection{
public:
    //design patter singleton
    static Important* getInstance();
    //distruttore
    ~Important() override;
    //aggiunge una nota alla collezione
    void addNote(Note* newNote) override;
    //rimuove una nota dalla collezione
    bool removeNote(int n) override;


    //metodi design pattern observer
    void updateDelete(Note &note) override;



private:
    Important();
    std::string name="Note Importanti";
    std::list<Note*> noteList;
    static Important* instance;

};


#endif //BARONCELLILAB_IMPORTANT_H
