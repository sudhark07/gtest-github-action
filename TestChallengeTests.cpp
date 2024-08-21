#include <gtest/gtest.h>
#include "TestChallenge.h"

extern int alertFailureCount = 0;
TEST(test_challenge_test_alert, check_return_value_200) {
    //arrange
    float input = 82.0;
    float expectedOutput = 1;
    // act
    alertInCelcius(input);
    // assert
    ASSERT_GE( alertFailureCount, expectedOutput);
}
