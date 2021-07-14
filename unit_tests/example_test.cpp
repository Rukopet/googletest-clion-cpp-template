#include <gtest/gtest.h>

// func prototype from main file
int example();

TEST(CheckCheck, test_true) {
assert(1 == 1);
}

TEST(CheckCheck, newCheck) {
// simple check return value
assert(example() == 1);
}