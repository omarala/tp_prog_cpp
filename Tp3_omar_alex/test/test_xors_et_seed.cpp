#include <iostream>
#include "gtest/gtest.h"
#include "../src/XorShift.hpp"

using namespace std;



TEST(XorShift, get_seed){
    XorShift pm(42);
    pm.set_seed(45);
    EXPECT_EQ(45, pm.get_seed()) << "Error: seed doesn't correspond to the parametre";
}



int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}