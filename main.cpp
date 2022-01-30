#include <iostream>
#include <memory>
#include <list>
#include "Note.h"
#include "Collection.h"

int main() {
    Collection collezione("Collezione");
    std::shared_ptr<Note> nota1(new Note("Nota 1,","Testo 1"));
    std::shared_ptr<Note> nota2(new Note("Nota 2,","Testo 2"));
    collezione.addNote(nota1);
    collezione.addNote(nota2);
    collezione.printCollection();
    return 0;
}
