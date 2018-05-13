#include <iostream>
#include <assert.h>
#include "gtest/gtest.h"
#include "../src/Dvector.h"

using namespace std;

/**
 * @brief teste du constructeur à partir d'un fichier
 */
TEST(Dvector, ConstructeurFromFile){
    Dvector v("file.txt");
    v.display();
    EXPECT_EQ(4, v.size()) << "Error: size of DVectore doesn't correspond to the file size";
}

/**
 * @brief teste du constructeur parametré
 */
TEST(Dvector, ConstructeurAvecParametre){
    Dvector v(6, 2.0);
    EXPECT_EQ(6, v.size()) << "Error: size doesn't correspond to the parametre";
}

/**
 * @brief teste du constructeur par defaut
 */
TEST(Dvector, ConstructeurSansParametre){
    Dvector v;
    EXPECT_EQ(0, v.size()) << "Error: size not null";
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}