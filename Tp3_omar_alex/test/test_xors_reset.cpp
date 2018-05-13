#include <iostream>
#include "gtest/gtest.h"
#include "../src/XorShift.hpp"

using namespace std;



TEST(XorShift, ConstructeurSansParametre){
    XorShift pm;
    pm.set_seed(89);
    pm.reset_seed();
    EXPECT_EQ(1, pm.get_seed()) << "Error: seed doesn't correspond to the parametre";
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}