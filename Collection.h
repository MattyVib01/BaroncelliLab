//
// Created by MattyVib01 on 29/01/2022.
//

#ifndef BARONCELLILAB_COLLECTION_H
#define BARONCELLILAB_COLLECTION_H
#include <iostream>
#include "Note.h"
#include <vector>
#include <memory>


class Collection {
public:
    Collection(std::string n);

    void addNote(std::unique_ptr<Note>); //scorre il vettore appena trova una casella vuota ci inserisce l'elemento (Warning)

    void deleteNote(int n);
private:
    std::string name;
    std::vector<std::unique_ptr<Note>> noteList;

};


#endif //BARONCELLILAB_COLLECTION_H
