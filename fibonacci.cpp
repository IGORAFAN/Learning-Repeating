#include <iostream>

//Число Фибоначчи
// 1 1 2 3 5 8 13 21 34

long lastSum = 1;
long resSum = 0;

long fibonacci(unsigned n)
{
    resSum = n + lastSum;
    lastSum = n;
    return resSum;
}

int main()
{ 
    for ( size_t i = 1; i <= 10; ++i ) {
        std::cout << fibonacci(resSum) << std::endl;
    }

    return 0;
}