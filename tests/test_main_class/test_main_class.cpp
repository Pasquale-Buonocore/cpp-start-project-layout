#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <memory>
#include "MainClass.hpp"
#include "./../mocks/MockDependency1.hpp"
#include "./../mocks/MockDependency2.hpp"

using ::testing::_;
using ::testing::Return;

class MainClassTest : public ::testing::Test {
protected:
    // Mock dependencies
    MockDependency1 mockDep1;
    MockDependency2 mockDep2;

    // Main class object using a unique_ptr
    std::unique_ptr<MainClass> mainClass;

    // Set up the fixture
    void SetUp() override {
        mainClass = std::make_unique<MainClass>(mockDep1, mockDep2);
    }
};

TEST_F(MainClassTest, DoSomething) {
    EXPECT_CALL(mockDep1, performTask()).Times(1);
    EXPECT_CALL(mockDep2, performTask()).Times(1);
    
    mainClass->doSomething();
}