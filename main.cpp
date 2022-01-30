#include <iostream>
#include <memory>
#include <list>
#include "Note.h"
#include "Collection.h"

int main() {
    //Creazione di 3 note e 1 collezione
    Note* nota1=new Note("Nota 1", "Testo 1");
    Note* nota2=new Note("Nota 2", "Testo 2");
    Note* nota3=new Note("Nota 3", "Testo 3");
    Collection collezione("Collezione");
    //Aggiungo le note alla collezione
    collezione.addNote(nota1);
    collezione.addNote(nota2);
    collezione.addNote(nota3);
    //Rimuovo la nota 2 dalla collezione
    collezione.removeNote(2);
    //Modifico la nota 1
    collezione.modifyNote(1,"Nuovo titolo","Nuovo testo");
    //Provo a modificare la nota 3, che non verrà modificata
    nota3->setBlocked(true);
    nota3->modifyNote("CIAO","CIAO");
    //Provo a eliminare la nota 3, che non verrà eliminata
    nota3->deleteNote();
    return 0;
}
