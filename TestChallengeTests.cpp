#include <gtest/gtest.h>
#include "TestChallenge.h"

extern int alertFailureCount;
void resetAlertFailureCount() {
    alertFailureCount = 0;
}

TEST(test_challenge_test_alert, check_alertCount_1) {
    //arrange
    float input = 82.0;
    float expectedOutput = 1;
    resetAlertFailureCount();
    // act
    alertInCelcius(input);
    // assert
    ASSERT_GE( alertFailureCount, expectedOutput);
}

TEST(test_challenge_test_alert, check_alertCount_2) {
    //arrange
    float input = 100.0;
    float expectedOutput = 2;
    resetAlertFailureCount();
    // act
    alertInCelcius(input);
    alertInCelcius(input);
    // assert
    ASSERT_GE( alertFailureCount, expectedOutput);
}


