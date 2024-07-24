#ifndef MOCKDEPENDENCY1_HPP
#define MOCKDEPENDENCY1_HPP

#include "IDependency1.hpp"
#include <gmock/gmock.h>

class MockDependency1 : public IDependency1 {
public:
    MOCK_METHOD(void, performTask, (), (override));
};

#endif // MOCKDEPENDENCY1_HPP
