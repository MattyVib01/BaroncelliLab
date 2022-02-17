//
// Created by MattyVib01 on 30/01/2022.
//

#ifndef BARONCELLILAB_IMPORTANT_H
#define BARONCELLILAB_IMPORTANT_H
#include <iostream>
#include "Observer.h"
#include "Note.h"

class Subject;
class Collection;


class Important: public Observer{
public:
    //design patter singleton
    static Important* getInstance();
    //distruttore
    ~Important();
    //aggiunge una nota alla collezione
    void addNote(Note* newNote);
    //rimuove una nota dalla collezione
    void removeNote(int n);
    //permette di modificare una nota dalla collezione
    void modifyNote(int n, std::string& title, std::string& text);


    //metodi getter e setter
    std::string getName();
    void setName(std::string& n);

    int getNumElements() const;
    void setNumElements(int n);

    std::list<Note*> getNoteList();

    //metodi design pattern observer
    void updateDelete(Note &note) override;



private:
    Important();
    std::string name="Note Importanti";
    std::list<Note*> noteList;
    static Important* instance;
    int numElements=0;

};


#endif //BARONCELLILAB_IMPORTANT_H
