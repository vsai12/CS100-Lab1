#include "c-echo.h"
#include "header/rectangle.hpp"
#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, WORLD) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "WORLD";
    EXPECT_EQ("WORLD", echo(2,test_val));
}

TEST(EchoTest, GoodByeWorld) {
    char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "Good"; test_val[2] = "Bye"; test_val[3] = "World";
    EXPECT_EQ("Good Bye World", echo(4,test_val));
}

TEST(EchoTest, Hi) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "H"; test_val[2] = "i";
    EXPECT_EQ("H i", echo(3,test_val));
}

TEST(AreaTest, FiveSix) {
        Rectangle rect;
        rect.set_width(5);
        rect.set_height(6);
    EXPECT_EQ(30, rect.area());
}

TEST(AreaTest, Zero) {
        Rectangle rect;
        rect.set_width(0);
        rect.set_height(0);
    EXPECT_EQ(0, rect.area());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
