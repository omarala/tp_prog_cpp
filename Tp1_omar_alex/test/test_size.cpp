#include <iostream>
#include "gtest/gtest.h"
#include "../src/Dvector.h"


TEST(Dvector, size){
    Dvector v(3, 2.5);
    std::stringstream str;
    EXPECT_EQ(3, v.size()) << "Error: size doesn't correspond";


}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}