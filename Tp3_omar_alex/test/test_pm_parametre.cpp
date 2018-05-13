#include <iostream>
#include "gtest/gtest.h"
#include "../src/ParkMiller.hpp"

using namespace std;



TEST(ParkMiller, ConstructeurAvecParametre){
    ParkMiller pm(42);
    EXPECT_EQ(42, pm.get_seed()) << "Error: seed doesn't correspond to the parametre";
}


// TEST(ParkMiller, ConstructeurAvecParametre2){
//   EXPECT_ANY_TRHOW({
//     ParkMiller pm(4.2);
//   });
// }

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}