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
    for(auto & itr : collection.getNoteList()){
        if(itr==note)
            isTrue=true;
    }
    ASSERT_TRUE(isTrue);
}

TEST(Collection,getNameTest){
    Collection collection("NomeCollezione");
    ASSERT_EQ("NomeCollezione",collection.getName());
}

TEST(Collection,setNameTest){
    Collection collection("NomeCollezione");
    std::string modify="Modifica";
    collection.setName(modify);
    ASSERT_EQ("Modifica",collection.getName());
}

TEST(Collection,modifyNoteTest){
    Note* note=new Note("Titolo","Testo");
    Collection collection("NomeCollezione");
    std::string modify="Modifica";
    collection.modifyNote(1,modify,modify);
    ASSERT_EQ("Modifica",note->getTitle());
    ASSERT_EQ("Modifica",note->getText());
}

TEST(Collection,getNumElementsTest){
    Collection collection("NomeCollezione");
    ASSERT_EQ(0,collection.getNumElements());
}



