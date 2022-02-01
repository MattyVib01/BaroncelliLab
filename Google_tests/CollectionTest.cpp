//
// Created by MattyVib01 on 01/02/2022.
//
#include "gtest/gtest.h"
#include "../Collection.h"


TEST(Collection,addNoteTest){
    Note* note=new Note("Titolo","Testo");
    Collection collection("NomeCollezione");
    collection.addNote(note);
    bool isTrue=false;
    for(auto itr=collection.getNoteList().begin();itr!=collection.getNoteList().end();itr++){
        if((*itr)==note)
            isTrue=true;
    }
    ASSERT_EQ(true, isTrue);
}

TEST(Collection,getNameTest){
    Collection collection("NomeCollezione");
    ASSERT_EQ("NomeCollezione",collection.getName());
}

TEST(Collection,setNameTest){
    Collection collection("NomeCollezione");
    collection.setname("NuovoNomeCollezione");
    ASSERT_EQ("NuovoNomeCollezione",collection.getName());
}

TEST(Collection,modifyNote){
    Note* note=new Note("Titolo","Testo");
    Collection collection("NomeCollezione");
    collection.modifyNote(1,"NuovoTitolo","NuovoTesto");
    ASSERT_EQ("NuovoTitolo",note->getTitle());
    ASSERT_EQ("NuovoTesto",note->getText());
}


