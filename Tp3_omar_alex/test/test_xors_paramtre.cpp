#include <iostream>
#include "gtest/gtest.h"
#include "../src/XorShift.hpp"

using namespace std;



TEST(XorShift, ConstructeurAvecParametre){
    XorShift pm(42);
    EXPECT_EQ(42, pm.get_seed()) << "Error: seed doesn't correspond to the parametre";
}


// TEST(Xorshift, ConstructeurAvecParametre2){
//   EXPECT_ANY_TRHOW({
//     Xorshift pm(4.2);
//   });
// }

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}