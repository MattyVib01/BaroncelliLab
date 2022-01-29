//
// Created by MattyVib01 on 29/01/2022.
//

#include "Note.h"

Note::Note(std::string t, std::string tx) :title(t),text(tx){
}

std::string Note::getTitle() {return title;}
void Note::setTitle(std::string t) {title=t;}

std::string Note::getText() {return text;}
void Note::setText(std::string t) {text=t;}

bool Note::isBlocked() {return blocked;}
void Note::setBlocked(bool b) {blocked=b;}