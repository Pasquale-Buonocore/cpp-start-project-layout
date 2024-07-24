#include "MainClass.hpp"

MainClass::MainClass(IDependency1& dep1, IDependency2& dep2)
    : dep1_(dep1), dep2_(dep2) {}

void MainClass::doSomething() {
    dep1_.performTask();
    dep2_.performTask();
}
