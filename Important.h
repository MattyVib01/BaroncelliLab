//
// Created by MattyVib01 on 30/01/2022.
//

#ifndef BARONCELLILAB_IMPORTANT_H
#define BARONCELLILAB_IMPORTANT_H
#include <iostream>
#include "Observer.h"
#include "Note.h"

class Subject;


class Important: public Observer{
public:
    static Important* getInstance();        //design patter singleton

    void printCollection();     //stampa numero titolo e testo di ogni nota nella collezione

    void addNote(Note* newNote);        //aggiunge una nota alla collezione

    void removeNote(int n);                 //rimuove una nota dalla collezione

    void modifyNote(int n, std::string title, std::string text);    //permette di modificare una nota dalla collezione


    //metodi getter e setter
    std::string getName();
    void setname(std::string n);
    int getNumElements() const;
    void setNumElements(int n);
    std::list<Note*> getNoteList();


    void updateDelete(Note &note) override;
    ~Important();


private:
    Important();
    std::string name="Note Importanti";
    std::list<Note*> noteList;
    static Important* instance;
    int numElements=0;

};


#endif //BARONCELLILAB_IMPORTANT_H
