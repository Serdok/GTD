#include <SFML/Config.hpp>
#include <gtest/gtest.h>

TEST(HelloTest, BasicAssertion) {
    EXPECT_GE(SFML_VERSION_MAJOR, 3) << "SFML version lower than 3.x";
}
