//
// Created by MattyVib01 on 31/01/2022.
//
#include "gtest/gtest.h"
#include "../Note.h"

TEST(Note,deleteNoteTest){
    Note* nota= new Note("Titolo","Testo");
    nota->deleteNote();
    ASSERT_EQ(nota, nullptr);
}

TEST(Note,modifyNoteTest){
    Note nota("Titolo","Testo");
    nota.modifyNote("NuovoTitolo","NuovoTesto");
    ASSERT_EQ("NuovoTitolo",nota.getTitle());
    ASSERT_EQ("NuovoTesto",nota.getText());
}
TEST(Note,getTitleTest){
    Note nota("Titolo","Testo");
    ASSERT_EQ("Titolo",nota.getTitle());
}

TEST(Note,setTitleTest){
    Note nota("Titolo","Testo");
    nota.setTitle("NuovoTitolo");
    ASSERT_EQ("NuovoTitolo",nota.getTitle());
}

TEST(Note, getTextTest){
    Note nota("Titolo","Testo");
    ASSERT_EQ("Testo",nota.getText());
}

TEST(Note, setTextTest){
    Note nota("Titolo","Testo");
    nota.setText("NuovoTesto");
    ASSERT_EQ("NuovoTesto",nota.getText());
}

TEST(Note, isBlockedTest){
    Note nota("Titolo","Testo");
    ASSERT_EQ(false,nota.isBlocked());
}

TEST(Note, setBlockedTest){
    Note nota("Titolo","Testo");
    nota.setBlocked(true);
    ASSERT_EQ(true,nota.isBlocked());
}
