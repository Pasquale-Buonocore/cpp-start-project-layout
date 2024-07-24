#ifndef MAINCLASS_HPP
#define MAINCLASS_HPP

#include "IDependency1.hpp"
#include "IDependency2.hpp"

class MainClass {
public:
    MainClass(IDependency1& dep1, IDependency2& dep2);
    void doSomething();
    
private:
    IDependency1& dep1_;
    IDependency2& dep2_;
};

#endif // MAINCLASS_HPP
