#include "testRegex.hpp"
#include <iostream>
#include <thread>
#include <chrono>

void myTestRegex::doSomething()
{
    auto locale = dateRx_.getloc();
    std::cout << locale.name() << std::endl;
}

int main()
{
    std::cout << "hello" << std::endl;
    myTestRegex tr;
    tr.doSomething();
    while (true)
    {
        std::cout << "All is okey!" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return 0;
}
