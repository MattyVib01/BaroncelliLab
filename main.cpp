#include <iostream>
#include <memory>
#include <list>
#include "Note.h"
#include "Collection.h"
#include "Important.h"

int main() {
    std::cout<<"Creazione di 3 note e 1 collezione"<<std::endl;
    Note* appuntamenti1=new Note("Appuntamenti 16/02", "Dentista, Riunione");
    Note* lista=new Note("Lista Spesa", "Mele, Banane");
    Note* appuntamenti2=new Note("Appuntamenti 17/02", "Dottore");
    appuntamenti1->printNote();
    lista->printNote();
    appuntamenti2->printNote();
    Collection appuntamenti("Appuntamenti");
    std::cout<<"\n\n";
    std::cout<<"Aggiungo le note 'appuntamenti' alla propria collezione"<<std::endl;
    appuntamenti.addNote(appuntamenti1);
    appuntamenti.addNote(appuntamenti2);
    appuntamenti.printCollection();
    std::cout<<"\n\n";
    std::cout<<"Rimuovo la nota appuntamenti2 dalla collezione"<<std::endl;
   appuntamenti.removeNote(2);
    std::cout<<"\n\n";
    std::cout<<"Modifico la nota appuntamenti1 dalla collezione"<<std::endl;
    appuntamenti.modifyNote(1,"Appuntamenti 16/02","Dentista, Riunione, Esame");
    std::cout<<"\n\n";
    std::cout<<"Provo a modificare la nota 'lista', che non verra' modificata poiche' e' bloccata"<<std::endl;
    lista->setBlocked(true);
    lista->modifyNote("Modifica", "Modifica");
    std::cout<<"\n\n";
    std::cout<<"Creazione della collezione 'Note Importanti'"<<std::endl;
    Important* noteimportanti;
    noteimportanti=Important::getInstance();
    noteimportanti->addNote(appuntamenti1);
    noteimportanti->addNote(lista);
    noteimportanti->printCollection();
    std::cout<<"\n\n";
    //Grazie al design pattern Observer se elimino una nota, questa viene eliminata anche nella collezione
    std::cout<<"Elimino la nota 'appuntamenti1'"<<std::endl;
    appuntamenti1->deleteNote();
    noteimportanti->printCollection();
    return 0;
}
