//
// Created by MattyVib01 on 30/01/2022.
//

#ifndef BARONCELLILAB_IMPORTANT_H
#define BARONCELLILAB_IMPORTANT_H
#include "Collection.h"


class Important{
public:
    static Important* getInstance();

    void printCollection();     //stampa numero titolo e testo di ogni nota nella collezione

    void addNote(Note* newNote);        //aggiunge una nota alla collezione

    void removeNote(int n);                 //rimuove una nota dalla collezione

    void modifyNote(int n, std::string title, std::string text);    //permette di modificare una nota dalla collezione

    std::string getName();
    void setname(std::string n);

    std::list<Note*> getNoteList();

private:
    Important();
    std::string name="Important";
    std::list<Note*> noteList;
    static Important* instance;

};


#endif //BARONCELLILAB_IMPORTANT_H
