//
// Created by MattyVib01 on 29/01/2022.
//

#ifndef BARONCELLILAB_NOTE_H
#define BARONCELLILAB_NOTE_H
#include <iostream>


class Note {
public:
    Note(std::string t, std::string tx);

    void deleteNote();

    void modifyNote(std::string t, std::string tx);

    std::string getTitle();
    void setTitle(std::string t);

    std::string getText();
    void setText(std::string t);

    bool isBlocked();
    void setBlocked(bool b);


private:
    std::string title;
    std::string text;
    bool blocked=false;
};


#endif //BARONCELLILAB_NOTE_H
