#include <iostream>
#include "gtest/gtest.h"
#include "../src/ParkMiller.hpp"

using namespace std;



TEST(ParkMiller, ConstructeurSansParametre){
    ParkMiller pm(89);
    ParkMiller pm2(pm);
    EXPECT_EQ(89, pm2.get_seed()) << "Error: seed doesn't correspond to the parametre";
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}