#include <iostream>
#include "gtest/gtest.h"
#include "../src/XorShift.hpp"

using namespace std;



TEST(XorShift, ConstructeurSansParametre){
    XorShift pm(89);
    XorShift pm2(pm);
    EXPECT_EQ(89, pm2.get_seed()) << "Error: seed doesn't correspond to the parametre";
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}