#ifndef DEPENDENCY1_HPP
#define DEPENDENCY1_HPP

#include "IDependency1.hpp"

class Dependency1 : public IDependency1 {
public:
    void performTask() override;
};

#endif // DEPENDENCY1_HPP
