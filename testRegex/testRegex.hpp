#include <regex>

class myTestRegex
{
public:
    void doSomething();

private:
    static inline const std::regex dateRx_{"^\\d{4}-\\d{2}-\\d{2}$"};
};