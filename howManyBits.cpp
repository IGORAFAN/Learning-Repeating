#include <iostream>

//00000000 00000000 00000000 00101011
//00000000 00000000 00000000 00000001

int main()
{
    int src = 0b01110101011;
    int carriage = 0b1;
    int tempStorage = 0;
    size_t counterOfBits = 0;

    for(size_t sumOfAllBits = 0; sumOfAllBits < sizeof(src)*8; ++sumOfAllBits )
    {
        tempStorage = src & carriage;
        if(tempStorage != 0){
            ++counterOfBits;
        }
        carriage <<= 1;
    }

    std::cout << "In this number: " << src << " has " << counterOfBits << " bits" << std::endl;

    return 0;
}