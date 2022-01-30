//
// Created by MattyVib01 on 29/01/2022.
//

#include "Note.h"

Note::Note(std::string t, std::string tx) :title(t),text(tx){
}

Note::Note(Note &orig) {
    title=orig.title;
    text=orig.text;
    blocked=orig.blocked;
}

void Note::deleteNote() {
    if(!this->isBlocked()){
        delete this;
    }
    else
        std::cout<<"La nota non può essere eliminata"<<std::endl;
}


void Note::printNote() {
    std::cout<<"Titolo :"<<this->getTitle()<<std::endl;
    std::cout<<"Testo :"<<this->getText()<<"\n"<<std::endl;
}

void Note::modifyNote(std::string t, std::string tx){
    if(this->blocked==false) {
        this->setText(tx);
        this->setTitle(t);
        std::cout<<"La nuova nota è :"<<std::endl;
        this->printNote();
    }
    else
        std::cout<<"IMPOSSIBILE MODIFICARE LA NOTA"<<std::endl;
}
std::string Note::getTitle() {return title;}
void Note::setTitle(std::string t) {title=t;}

std::string Note::getText() {return text;}
void Note::setText(std::string t) {text=t;}

bool Note::isBlocked() {return blocked;}
void Note::setBlocked(bool b) {blocked=b;}