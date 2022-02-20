//
// Created by MattyVib01 on 31/01/2022.
//
#include "gtest/gtest.h"
#include "../Note.h"

TEST(Note,deleteNoteTest){
    Note* nota= new Note("Titolo","Testo");
    nota->setBlocked(true);
    ASSERT_FALSE(nota->deleteNote());
    nota->setBlocked(false);
    ASSERT_TRUE(nota->deleteNote());

}

TEST(Note,getTitleTest){
    Note nota("Titolo","Testo");
    ASSERT_EQ("Titolo",nota.getTitle());
}


TEST(Note, getTextTest){
    Note nota("Titolo","Testo");
    ASSERT_EQ("Testo",nota.getText());
}

TEST(Note,modifyNoteTest){
    Note nota("Titolo","Testo");
    std::string modify="Modifica";
    bool isModified= false;
    isModified=nota.modifyNote(modify,modify);
    ASSERT_TRUE(isModified);
    ASSERT_EQ("Modifica",nota.getTitle());
    ASSERT_EQ("Modifica",nota.getText());
}


TEST(Note,setTitleTest){
    Note nota("Titolo","Testo");
    std::string modify="Modifica";
    nota.setTitle(modify);
    ASSERT_EQ("Modifica",nota.getTitle());
}



TEST(Note, setTextTest){
    Note nota("Titolo","Testo");
    std::string modify="Modifica";
    nota.setText(modify);
    ASSERT_EQ("Modifica",nota.getText());
}

TEST(Note, isBlockedTest){
    Note nota("Titolo","Testo");
    ASSERT_FALSE(nota.isBlocked());
}

TEST(Note, setBlockedTest){
    Note nota("Titolo","Testo");
    nota.setBlocked(true);
    ASSERT_TRUE(nota.isBlocked());
}
