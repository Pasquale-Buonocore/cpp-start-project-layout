#ifndef MOCKDEPENDENCY2_HPP
#define MOCKDEPENDENCY2_HPP

#include "IDependency2.hpp"
#include <gmock/gmock.h>

class MockDependency2 : public IDependency2 {
public:
    MOCK_METHOD(void, performTask, (), (override));
};

#endif // MOCKDEPENDENCY2_HPP
