//
// Created by MattyVib01 on 29/01/2022.
//

#ifndef BARONCELLILAB_NOTE_H
#define BARONCELLILAB_NOTE_H
#include <iostream>
#include<list>
#include "Subject.h"
#include "Observer.h"


class Note: public Subject {
public:
    Note(std::string t, std::string tx);

    Note(Note &orig);

    void deleteNote();

    void printNote() const;

    void modifyNote(std::string t, std::string tx);

    std::string getTitle() const;
    void setTitle(std::string t);

    std::string getText() const;
    void setText(std::string t);

    bool isBlocked() const;
    void setBlocked(bool b);

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
