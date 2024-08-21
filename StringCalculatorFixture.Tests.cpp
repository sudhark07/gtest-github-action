#include "StringCalculator.h"
#include <gtest/gtest.h>

//Fixture
class StringCalculatorAddTestFixture:public testing::Test{
  protected:
    //Common Reusable Code
    StringCalculator *calculator;
    //Hook Callbacks
  // You can define per-test-suite set-up logic as usual.
     static void SetUpTestSuite() {
       std::cout<<"StringCalculatorAddTestFixture Setup"<<std::endl;
     }
 // You can define per-test-suite tear-down logic as usual.
     static void TearDownTestSuite() {
       std::cout<<"StringCalculatorAddTestFixture TearDown"<<std::endl;
     }
  // You can define per-test set-up logic as usual.
  void SetUp() override {
    calculator=new StringCalculator();
    std::cout<<"Test Setup"<<std::endl;
  }

  // You can define per-test tear-down logic as usual.
  void TearDown() override {
    delete calculator;
    std::cout<<"Test Teardown"<<std::endl;
  }

};

TEST_F(StringCalculatorAddTestFixture,when_passed_a_single_number_returns_0_for_empty_string){
 //Arrange
  string input="";
  int expectedsum=0;
  //Act
  int actualSum=calculator->Add(input);
  //Assert
  ASSERT_EQ(actualSum,expectedsum);
}
TEST_F(StringCalculatorAddTestFixture,when_passed_a_single_number_returns_0_for_zero){
 //Arrange
  string input="0";
  int expectedsum=0;
  //Act
  int actualSum=calculator->Add(input);
  //Assert
  ASSERT_EQ(actualSum,expectedsum);
}
