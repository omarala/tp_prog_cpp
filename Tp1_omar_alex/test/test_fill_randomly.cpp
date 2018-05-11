#include<iostream>
#include<assert.h>
#include "gtest/gtest.h"
#include<sstream>

#include"../src/Dvector.h"

TEST(Dvector, fillRandomly){
    Dvector v(3, 2.5);
    v.fillRandomly();
    stringstream str;
    v.display(str);
    Dvector v2(3, 2.5);
    v2.fillRandomly();
    stringstream str2;
    v2.display(str2);
    EXPECT_NE( str.str(), str2.str()) << "Error: fillRandomly two same vectors";

}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}