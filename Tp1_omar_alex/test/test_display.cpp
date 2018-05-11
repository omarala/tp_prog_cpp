#include <iostream>
#include <sstream>
#include "gtest/gtest.h"
#include "../src/Dvector.h"


TEST(Dvector, display){
    Dvector v(3, 2.5);
    std::stringstream str;
    v.display( str );
    EXPECT_EQ(str.str(), "2.5\n2.5\n2.5\n") << "Error: display result doesn't correspond to v(3, 2.5)";

}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}