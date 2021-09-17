#include <regex>
#include <iostream>

int main(int argc, char **argv)
{
    static const std::regex dateRx_{"^\\d{4}-\\d{2}-\\d{2}$"};
    static const std::regex pattern("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[-+_!@#$%^&*.,?]).+$");
    static const std::regex PhoneFormatRegex("^[+][0-9]{1,254}$");

    auto locale1 = dateRx_.getloc();
    std::cout << locale1.name() << std::endl;
    auto locale2 = pattern.getloc();
    std::cout << locale2.name() << std::endl;
    auto locale3 = PhoneFormatRegex.getloc();
    std::cout << locale3.name() << std::endl;

    std::cout << "All is okey!" << std::endl;

    return 0;
}