//
// Created by MattyVib01 on 31/01/2022.
//
#include "gtest/gtest.h"
#include "../Note.h"
TEST(Note,getTitleTest){
    Note nota("Titolo","Testo");
    ASSERT_EQ("Titolo",nota.getTitle());
}

