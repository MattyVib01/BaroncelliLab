//
// Created by MattyVib01 on 29/01/2022.
//

#ifndef BARONCELLILAB_NOTE_H
#define BARONCELLILAB_NOTE_H
#include <iostream>
#include<list>
#include "Subject.h"


class Note: public Subject {
public:
    //costruttore
    Note(std::string t, std::string tx);
    //costruttore di copia
    Note(Note &orig);
    //cancella una nota (se non è bloccata)
    void deleteNote();
    //stampa titolo e testo di una nota
    void printNote() const;
    //modifica titolo e testo di una nota (se non bloccata)
    void modifyNote(std::string t, std::string tx);

    //metodi getter e setter
    std::string getTitle() const;
    void setTitle(std::string t);

    std::string getText() const;
    void setText(std::string t);

    bool isBlocked() const;
    void setBlocked(bool b);

    //metodi design pattern observer
    void notify() override;
    void subscribe(Observer* o) override;
    void unsubscribe(Observer *o) override;


private:
    std::string title;
    std::string text;
    bool blocked=false;
    std::list<Observer*> observersList;
};


#endif //BARONCELLILAB_NOTE_H
