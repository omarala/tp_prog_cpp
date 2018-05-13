#include <iostream>
#include "gtest/gtest.h"
#include "../src/ParkMiller.hpp"

using namespace std;



TEST(ParkMiller, get_seed){
    ParkMiller pm(42);
    pm.set_seed(45);
    EXPECT_EQ(45, pm.get_seed()) << "Error: seed doesn't correspond to the parametre";
}



int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}