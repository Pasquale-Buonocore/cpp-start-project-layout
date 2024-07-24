#ifndef DEPENDENCY2_HPP
#define DEPENDENCY2_HPP

#include "IDependency2.hpp"

class Dependency2 : public IDependency2 {
public:
    void performTask() override;
};

#endif // DEPENDENCY2_HPP
