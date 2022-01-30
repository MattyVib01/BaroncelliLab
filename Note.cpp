//
// Created by MattyVib01 on 29/01/2022.
//

#include "Note.h"

Note::Note(std::string t, std::string tx) :title(t),text(tx){
}

void Note::deleteNote() {
    if(!this->isBlocked()){
        delete this;
    }
    else
        std::cout<<"La nota non può essere eliminata"<<std::endl;
}

void Note::modifyNote(std::string t, std::string tx){
    if(!this->isBlocked()){
        this->setText(t);
        this->setTitle(tx);
    }
    else
        std::cout<<"La nota non può essere modificata"<<std::endl;
}

std::string Note::getTitle() {return title;}
void Note::setTitle(std::string t) {title=t;}

std::string Note::getText() {return text;}
void Note::setText(std::string t) {text=t;}

bool Note::isBlocked() {return blocked;}
void Note::setBlocked(bool b) {blocked=b;}