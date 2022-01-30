#include <iostream>
#include <memory>
#include <list>
#include "Note.h"
#include "Collection.h"

int main() {
    Collection collezione("Collezione");
    Note* nota1=new Note("Nota 1", "Testo 1");
    Note* nota2=new Note("Nota 2", "Testo 2");
    Note* nota3=new Note("Nota 3", "Testo 3");
    collezione.addNote(*nota1);
    collezione.addNote(*nota2);
    collezione.addNote(*nota3);
    collezione.removeNote(2);
    return 0;
}
